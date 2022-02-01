#include "Collision.h"
#include "ColliderComponent.h"

bool Collision::AABB(const SDL_Rect& recA, const SDL_Rect& recB)
{
	if (
		recA.x + (recA.w-16) >= recB.x &&
		recB.x + (recB.w-16) >= recA.x &&
		recA.y + (recA.h-16) >= recB.y &&
		recB.y + (recB.h-16) >= recA.y
		)
	{
		return true;
	}
	return false;
}

bool Collision::AABB(const ColliderComponent& colA, const ColliderComponent& colB)
{
	if (AABB(colA.collider, colB.collider))
	{
		std::cout << colA.tag << " hit: " << colB.tag << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}