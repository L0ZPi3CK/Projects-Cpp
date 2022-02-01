#pragma once
#include "ECS.h"
#include "TransformComponent.h"
#include "SpriteComponent.h"
#include "SDL.h"

class TileComponent : public Component
{
public:
	TransformComponent* transform;
	SpriteComponent* sprite;


	SDL_Rect tileRect;
	int tileID;
	const char* path;

	TileComponent() = default;
	TileComponent(int x, int y, int w, int h, int id)
	{
		tileRect.x = x;
		tileRect.y = y;
		tileRect.w = w;
		tileRect.h = h;
		tileID = id;
		
		// Nadaje asset w zaleznosci od tileID
		switch (tileID)
		{
		case 0:
			path = "Assets/grass.png";
			break;
		case 1:
			path = "Assets/square_gray.png";
			break;
		case 2:
			path = "Assets/square_red.png";
			break;
		case 3:
			path = "Assets/square_green.png";
			break;
		default:
			break;
		}
	}
	void init()override
	{
		entity->addComponents<TransformComponent>((float)tileRect.x, (float)tileRect.y, tileRect.w, tileRect.h, 1);
		transform = &entity->getComponent<TransformComponent>();

		entity->addComponents<SpriteComponent>(path);
		if (path == "Assets/square_gray.png")
		{
			entity->addComponents<ColliderComponent>("wall");
		}
		else if (path == "Assets/square_red.png")
		{
			entity->addComponents<ColliderComponent>("REDSQUARE");
		}
		else if (path == "Assets/square_green.png")
		{
			entity->addComponents<ColliderComponent>("GREEN");
		}

		sprite = &entity->getComponent<SpriteComponent>();
	}
};