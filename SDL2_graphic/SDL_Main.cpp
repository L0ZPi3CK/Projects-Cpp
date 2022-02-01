#include "MainBoard.h"

Game* scanner = nullptr;

int main(int argc, char* argv[])
{
	
	const int FPS = 60;
	const int frameDelay = 1000 / FPS;

	Uint32 frameStart;
	int frameTime;

	scanner = new Game();
	scanner->init("Board_Scanner", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, false);

	while (scanner->running())
	{
		frameStart = SDL_GetTicks();

		scanner->handleEvents();
		scanner->update();
		scanner->render();

		frameTime = SDL_GetTicks() - frameStart;
		
		if (frameDelay > frameTime)
		{
			SDL_Delay(frameDelay - frameTime);
		}
	}


	scanner->clean();
	return 0;
}