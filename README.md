# EZInput 
A simple layer for SDL2 input for fast use of input in test or small software

# Example

```c
#include <SDL2/SDL.h>

#define INCLUDE_EZINPUT_IMPLEMENTATION
#include "ezinput.h"

int main(int argc, char ** argv)
{
	SDL_Window * window = 0;
	SDL_Renderer * renderer = 0;
	SDL_CreateWindowAndRenderer(128, 128, 0, &window, &renderer);

	while (EZInput_Return()) // Main loop
	{
		// Logic
		if (EZInput_OnPress(EZI_KEY_Q))
			printf("You pressed the key Q\n");
		if (EZInput_Pressed(EZI_KEY_W))
			printf("You are pressing the key W\n");
		if (EZInput_OnRelease(EZI_KEY_E))
			printf("You released the key E\n");

		if (EZInput_OnPress(EZI_KEY_ESCAPE))
			EZInput_Quit();
		
		// Graphics
		SDL_RenderPresent(renderer);
	}

	return 0;
}
```
