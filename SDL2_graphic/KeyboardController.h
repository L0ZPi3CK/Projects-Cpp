#pragma once

#include "MainBoard.h"
#include "ECS.h"
#include "Components.h"

class KeyboardController : public Component
{
private:
	bool	K_a = false,
		K_d = false,
		K_w = false,
		K_s = false;

public:
	TransformComponent* transform;
	SpriteComponent* sprite;
	void init() override
	{
		transform = &entity->getComponent<TransformComponent>();
		sprite = &entity->getComponent<SpriteComponent>();
	}

	void update() override
	{
		if (Game::event.type == SDL_KEYDOWN)
		{
			switch (Game::event.key.keysym.sym)
			{
			case SDLK_a:
				transform->velocity.x = -1;
				K_a = true;
				//sprite->Play("walk_left");
				break;
			case SDLK_d:
				transform->velocity.x = 1;
				K_d = true;
				//sprite->Play("walk_right");
				break;
			case SDLK_w:
				transform->velocity.y = -1;
				K_w = true;
				//sprite->Play("walk_up");
				break;
			case SDLK_s:
				transform->velocity.y = 1;
				K_s = true;
				//sprite->Play("walk_down");
				break;
			default:
				break;
			}
		}
		if (Game::event.type == SDL_KEYUP)
		{
			switch (Game::event.key.keysym.sym)
			{
			case SDLK_a:
				transform->velocity.x = 0;
				K_a = false;
				sprite->Play("Idle");
				break;
			case SDLK_d:
				transform->velocity.x = 0;
				K_d = false;
				sprite->Play("Idle");
				break;
			case SDLK_w:
				transform->velocity.y = 0;
				K_w = false;
				sprite->Play("Idle");
				break;
			case SDLK_s:
				transform->velocity.y = 0;
				K_s = false;
				sprite->Play("Idle");
				break;
			default:
				break;
			}
		}

		if (transform->velocity.x < 0)
		{
			sprite->Play("walk_left");
		}
		else if (transform->velocity.x > 0)
		{
			sprite->Play("walk_right");
		}
		else if (transform->velocity.y > 0)
		{
			sprite->Play("walk_down");
		}
		else if (transform->velocity.y < 0)
		{
			sprite->Play("walk_up");
		}
		
		if (transform->velocity.x == 0 && K_a == true)
		{
			transform->velocity.x = -1;
			sprite->Play("walk_left");
		}
		if (transform->velocity.x == 0 && K_d == true)
		{
			transform->velocity.x = 1;
			sprite->Play("walk_right");
		}
		if (transform->velocity.y == 0 && K_w == true)
		{
			transform->velocity.y = -1;
			sprite->Play("walk_up");
		}
		if (transform->velocity.y == 0 && K_s == true)
		{
			transform->velocity.y = 1;
			sprite->Play("walk_down");
		}
	}



};