#include "GameObject.h"
#include "TextureManager.h"

// konstruktor
GameObject::GameObject(const char* texturesheet, int x, int y)
{
	
	xpos = x;
	ypos = y;
	 
	srcRect.h = 32;
	srcRect.w = 32;
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w;
	destRect.h = srcRect.h;
	
	objTexture = TextureManager::LoadTexture(texturesheet);
}

// Funkcja update
void GameObject::Update()
{
	xpos++;
	ypos++;

	srcRect.h = 14;
	srcRect.w = 32;
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w * 2;
	destRect.h = srcRect.h * 2;
}

void GameObject::Render()
{
	SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}

