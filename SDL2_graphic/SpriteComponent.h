#pragma once
#include "Components.h"
#include "SDL.h"
#include "TextureManager.h"
#include "Animation.h"
#include <map>

class SpriteComponent : public Component
{
private:
	TransformComponent* transform;
	SDL_Texture* texture;
	SDL_Rect srcRect, destRect;

	//Animation
	bool animated = false;
	int frames = 0;
	int speed = 100;

public:

	int animindex = 0;
	std::map<const char*, Animation> animations;

	//Konstruktory
	SpriteComponent() = default;
	SpriteComponent(const char* path)
	{
		setTex(path);
	}
	SpriteComponent(const char* path, bool isAnimated)
	{
		animated = isAnimated;
		// Tutaj przechodzenie pomiedzy poczegolnymi animacjami dla chodzenia, stania itp
		Animation idle			= Animation(0, 2, 300);
		Animation walk_down		= Animation(1, 4, 300);
		Animation walk_up		= Animation(2, 4, 300);
		Animation walk_right	= Animation(3, 4, 300);
		Animation walk_left		= Animation(4, 4, 300);

		animations.emplace("Idle", idle);
		animations.emplace("walk_down", walk_down);
		animations.emplace("walk_up", walk_up);
		animations.emplace("walk_right", walk_right);
		animations.emplace("walk_left", walk_left);

		Play("Idle");

		setTex(path);
	}
	~SpriteComponent()
	{
		SDL_DestroyTexture(texture);
	}

	// Metody
	void setTex(const char* path)
	{
		texture = TextureManager::LoadTexture(path);
	}
	void init() override
	{
		transform = &entity->getComponent<TransformComponent>();

		srcRect.x = srcRect.y = 0;
		srcRect.w = transform->width;
		srcRect.h = transform->height;
	}
	void update() override
	{
		if (animated)
		{
			srcRect.x = srcRect.w * static_cast<int>((SDL_GetTicks() / speed) % frames);
		}

		srcRect.y = animindex * transform->height;

		destRect.x = static_cast<int>(transform->position.x);
		destRect.y = static_cast<int>(transform->position.y);
		destRect.w = transform->width * transform->scale;
		destRect.h = transform->height * transform->scale;
	}
	void draw() override
	{
		TextureManager::Draw(texture, srcRect, destRect);
	}
	void Play(const char* animName)
	{
		frames = animations[animName].frames;
		animindex = animations[animName].index;
		speed = animations[animName].speed;
	}
};