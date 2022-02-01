#pragma once
#include <string>
#include "SDL.h"
#include "Components.h"

class ColliderComponent : public Component
{

public:

	SDL_Rect collider;
	std::string tag;

	TransformComponent* transform;

	ColliderComponent(std::string t)
	{
		tag = t;
	}
	void init() override
	{
		if (!entity->hasComponent<TransformComponent>())
		{
			entity->addComponents<TransformComponent>();
		}
		transform = &entity->getComponent<TransformComponent>();

		Game::colliders.push_back(this);
	}

	void update() override
	{
		collider.x = static_cast<int>(transform->position.x);
		collider.y = static_cast<int>(transform->position.y);
		collider.w = transform->width * transform->scale;
		collider.h = transform->height * transform->scale;
	}

	void negateRect()
	{
		collider.x = -collider.x;
		collider.y = -collider.y;
		collider.w = -collider.w;
		collider.h = -collider.h;
	}
	void setStartRect()
	{
		collider.x = 20;
		collider.y = 20;
		collider.w = 20;
		collider.h = 20;
	}
};