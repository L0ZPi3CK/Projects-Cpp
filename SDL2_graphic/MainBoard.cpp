#include "MainBoard.h"
#include "TextureManager.h"
#include "Map.h"
#include "Components.h"
#include "Vector2D.h"
#include "Collision.h"
#include "TileComponent.h"

//GameObject* GreenSquare;
Map* map;
Manager manager;

SDL_Renderer* Game::renderer = nullptr;
SDL_Event Game::event;

std::vector<ColliderComponent*> Game::colliders;

auto& player(manager.addEntity());
auto& wall(manager.addEntity());

enum groupLabels : std::size_t
{
	groupMap,
	groupPlayers,
	groupEnemies,
	groupColliders
};

Game::Game()
{
	count = 0;
	isRunning = false;
	window = nullptr;
	renderer = nullptr;
}

Game::~Game()
{
}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)\
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		}

		isRunning = true;
	}
	else
	{
		isRunning = false;
	}

	map = new Map();
	// ECS implementation

	Map::LoadMap("Assets/p16x16.map", 25, 20);

	player.addComponents<TransformComponent>(2);
	player.addComponents<SpriteComponent>("Assets/log_animation2.png",true);
	player.addComponents<KeyboardController>();
	player.addComponents<ColliderComponent>("player");
	player.getComponent<ColliderComponent>().setStartRect();
	player.getComponent<TransformComponent>().setStartVelocity();
	player.addGroup(groupPlayers);

	/*
	wall.addComponents<TransformComponent>(300.0f, 300.0f, 300, 20, 1);
	wall.addComponents<SpriteComponent>("Assets/square_green.png");
	wall.addComponents<ColliderComponent>("wall");
	wall.addGroup(groupMap);
	*/
}

void Game::handleEvents()
{
	SDL_PollEvent(&event);

	if (event.type == SDL_QUIT)
	{
		isRunning = false;
	}
}

void Game::update()
{
	int counte = 0;
	manager.refresh();
	manager.update();

	for (auto cc : colliders)
	{
		Collision::AABB(player.getComponent<ColliderComponent>(), *cc);
		if (Collision::AABB(player.getComponent<ColliderComponent>().collider, cc->collider) && cc->tag == "wall")
		{
			player.getComponent<ColliderComponent>().negateRect();
			player.getComponent<TransformComponent>().negateVelocity();
			std::cout << "Ej" << std::endl;
		}
		else if (Collision::AABB(player.getComponent<ColliderComponent>().collider, cc->collider) && cc->tag == "REDSQUARE")
		{
			std::cout << "*****Przegrales*****";
			isRunning = false;
		}
		else if (Collision::AABB(player.getComponent<ColliderComponent>().collider, cc->collider) && cc->tag == "GREEN")
		{
			std::cout << "****Wygrales****";
			isRunning = false;
		}
	}

}

auto& tiles(manager.getGroup(groupMap));
auto& players(manager.getGroup(groupPlayers));
auto& enemies(manager.getGroup(groupEnemies));

// this is where we would add stuff to render
void Game::render()
{
	SDL_RenderClear(renderer);

	for (auto& t : tiles)
	{
		t->draw();
	}

	for (auto& p : players)
	{
		p->draw();
	}

	for (auto& e : enemies)
	{
		e->draw();
	}

	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Scanner Cleaned" << std::endl;
}

bool Game::running()
{
	return isRunning;
}

void Game::AddTile(int id, int x, int y)
{
	auto& tile(manager.addEntity());
	tile.addComponents<TileComponent>(x, y, 32, 32, id);
	tile.addGroup(groupMap);
}