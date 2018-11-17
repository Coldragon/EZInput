#EZInput 
A simple layer for SDL2 input for fast use of input in test or small software

#Example

```c
int main(int argc, char ** argv)
{
	SDL_Window * window = 0;
	SDL_Renderer * renderer = 0;
	SDL_CreateWindowAndRenderer(480, 240, 0, &window, &renderer);
	while (EZInput_Return()) 
	{
		for (int i = 0; i < EZI_KEY_MAX; i++)
			if (EZInput_OnPress(i))
				printf("OnPress key number %d\n", i);

		SDL_RenderPresent(renderer);
	}
	return 0;
}
```

#Licence

	MIT License
 
	Copyright (c) 2018 WARLUS Dylan
 
	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:
 
	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.
 
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
 
