/*
 * Title : EZInput 
 * Autor : WARLUS Dylan aka Coldragon 
 * Date : 17/11/2018
 * Description : A simple layer for SDL2 input for fast use of input in test or small software
 * Licence : MIT (see below)
 *
*/

/*
 * MIT License
 * 
 * Copyright (c) 2018 WARLUS Dylan
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
*/

#ifndef INCLUDE_EZINPUT_H
#define INCLUDE_EZINPUT_H

#define EZINPUT_VERSION "0.1"

#include <stdbool.h>
#include <string.h>

#ifdef EZINPUT_USE_STATIC
#define EZINPUT_DEF static
#else
#define EZINPUT_DEF extern
#endif

enum EZI_Key
{
	EZI_KEY_UNKNOWN = 0,
	EZI_KEY_A = 4,
	EZI_KEY_B = 5,
	EZI_KEY_C = 6,
	EZI_KEY_D = 7,
	EZI_KEY_E = 8,
	EZI_KEY_F = 9,
	EZI_KEY_G = 10,
	EZI_KEY_H = 11,
	EZI_KEY_I = 12,
	EZI_KEY_J = 13,
	EZI_KEY_K = 14,
	EZI_KEY_L = 15,
	EZI_KEY_M = 16,
	EZI_KEY_N = 17,
	EZI_KEY_O = 18,
	EZI_KEY_P = 19,
	EZI_KEY_Q = 20,
	EZI_KEY_R = 21,
	EZI_KEY_S = 22,
	EZI_KEY_T = 23,
	EZI_KEY_U = 24,
	EZI_KEY_V = 25,
	EZI_KEY_W = 26,
	EZI_KEY_X = 27,
	EZI_KEY_Y = 28,
	EZI_KEY_Z = 29,
	EZI_KEY_1 = 30,
	EZI_KEY_2 = 31,
	EZI_KEY_3 = 32,
	EZI_KEY_4 = 33,
	EZI_KEY_5 = 34,
	EZI_KEY_6 = 35,
	EZI_KEY_7 = 36,
	EZI_KEY_8 = 37,
	EZI_KEY_9 = 38,
	EZI_KEY_0 = 39,
	EZI_KEY_RETURN = 40,
	EZI_KEY_ESCAPE = 41,
	EZI_KEY_BACKSPACE = 42,
	EZI_KEY_TAB = 43,
	EZI_KEY_SPACE = 44,
	EZI_KEY_MINUS = 45,
	EZI_KEY_EQUALS = 46,
	EZI_KEY_LEFTBRACKET = 47,
	EZI_KEY_RIGHTBRACKET = 48,
	EZI_KEY_BACKSLASH = 49,
	EZI_KEY_NONUSHASH = 50,
	EZI_KEY_SEMICOLON = 51,
	EZI_KEY_APOSTROPHE = 52,
	EZI_KEY_GRAVE = 53,
	EZI_KEY_COMMA = 54,
	EZI_KEY_PERIOD = 55,
	EZI_KEY_SLASH = 56,
	EZI_KEY_CAPSLOCK = 57,
	EZI_KEY_F1 = 58,
	EZI_KEY_F2 = 59,
	EZI_KEY_F3 = 60,
	EZI_KEY_F4 = 61,
	EZI_KEY_F5 = 62,
	EZI_KEY_F6 = 63,
	EZI_KEY_F7 = 64,
	EZI_KEY_F8 = 65,
	EZI_KEY_F9 = 66,
	EZI_KEY_F10 = 67,
	EZI_KEY_F11 = 68,
	EZI_KEY_F12 = 69,
	EZI_KEY_PRINTSCREEN = 70,
	EZI_KEY_SCROLLLOCK = 71,
	EZI_KEY_PAUSE = 72,
	EZI_KEY_INSERT = 73,
	EZI_KEY_HOME = 74,
	EZI_KEY_PAGEUP = 75,
	EZI_KEY_DELETE = 76,
	EZI_KEY_END = 77,
	EZI_KEY_PAGEDOWN = 78,
	EZI_KEY_RIGHT = 79,
	EZI_KEY_LEFT = 80,
	EZI_KEY_DOWN = 81,
	EZI_KEY_UP = 82,
	EZI_KEY_NUMLOCKCLEAR = 83,
	EZI_KEY_KP_DIVIDE = 84,
	EZI_KEY_KP_MULTIPLY = 85,
	EZI_KEY_KP_MINUS = 86,
	EZI_KEY_KP_PLUS = 87,
	EZI_KEY_KP_ENTER = 88,
	EZI_KEY_KP_1 = 89,
	EZI_KEY_KP_2 = 90,
	EZI_KEY_KP_3 = 91,
	EZI_KEY_KP_4 = 92,
	EZI_KEY_KP_5 = 93,
	EZI_KEY_KP_6 = 94,
	EZI_KEY_KP_7 = 95,
	EZI_KEY_KP_8 = 96,
	EZI_KEY_KP_9 = 97,
	EZI_KEY_KP_0 = 98,
	EZI_KEY_KP_PERIOD = 99,
	EZI_KEY_NONUSBACKSLASH = 100,
	EZI_KEY_APPLICATION = 101,
	EZI_KEY_POWER = 102,
	EZI_KEY_KP_EQUALS = 103,
	EZI_KEY_F13 = 104,
	EZI_KEY_F14 = 105,
	EZI_KEY_F15 = 106,
	EZI_KEY_F16 = 107,
	EZI_KEY_F17 = 108,
	EZI_KEY_F18 = 109,
	EZI_KEY_F19 = 110,
	EZI_KEY_F20 = 111,
	EZI_KEY_F21 = 112,
	EZI_KEY_F22 = 113,
	EZI_KEY_F23 = 114,
	EZI_KEY_F24 = 115,
	EZI_KEY_EXECUTE = 116,
	EZI_KEY_HELP = 117,
	EZI_KEY_MENU = 118,
	EZI_KEY_SELECT = 119,
	EZI_KEY_STOP = 120,
	EZI_KEY_AGAIN = 121,
	EZI_KEY_UNDO = 122,
	EZI_KEY_CUT = 123,
	EZI_KEY_COPY = 124,
	EZI_KEY_PASTE = 125,
	EZI_KEY_FIND = 126,
	EZI_KEY_MUTE = 127,
	EZI_KEY_VOLUMEUP = 128,
	EZI_KEY_VOLUMEDOWN = 129,
	EZI_KEY_KP_COMMA = 133,
	EZI_KEY_KP_EQUALSAS400 = 134,
	EZI_KEY_INTERNATIONAL1 = 135,
	EZI_KEY_INTERNATIONAL2 = 136,
	EZI_KEY_INTERNATIONAL3 = 137,
	EZI_KEY_INTERNATIONAL4 = 138,
	EZI_KEY_INTERNATIONAL5 = 139,
	EZI_KEY_INTERNATIONAL6 = 140,
	EZI_KEY_INTERNATIONAL7 = 141,
	EZI_KEY_INTERNATIONAL8 = 142,
	EZI_KEY_INTERNATIONAL9 = 143,
	EZI_KEY_LANG1 = 144,
	EZI_KEY_LANG2 = 145,
	EZI_KEY_LANG3 = 146,
	EZI_KEY_LANG4 = 147,
	EZI_KEY_LANG5 = 148,
	EZI_KEY_LANG6 = 149,
	EZI_KEY_LANG7 = 150,
	EZI_KEY_LANG8 = 151,
	EZI_KEY_LANG9 = 152,
	EZI_KEY_ALTERASE = 153,
	EZI_KEY_SYSREQ = 154,
	EZI_KEY_CANCEL = 155,
	EZI_KEY_CLEAR = 156,
	EZI_KEY_PRIOR = 157,
	EZI_KEY_RETURN2 = 158,
	EZI_KEY_SEPARATOR = 159,
	EZI_KEY_OUT = 160,
	EZI_KEY_OPER = 161,
	EZI_KEY_CLEARAGAIN = 162,
	EZI_KEY_CRSEL = 163,
	EZI_KEY_EXSEL = 164,
	EZI_KEY_KP_00 = 176,
	EZI_KEY_KP_000 = 177,
	EZI_KEY_THOUSANDSSEPARATOR = 178,
	EZI_KEY_DECIMALSEPARATOR = 179,
	EZI_KEY_CURRENCYUNIT = 180,
	EZI_KEY_CURRENCYSUBUNIT = 181,
	EZI_KEY_KP_LEFTPAREN = 182,
	EZI_KEY_KP_RIGHTPAREN = 183,
	EZI_KEY_KP_LEFTBRACE = 184,
	EZI_KEY_KP_RIGHTBRACE = 185,
	EZI_KEY_KP_TAB = 186,
	EZI_KEY_KP_BACKSPACE = 187,
	EZI_KEY_KP_A = 188,
	EZI_KEY_KP_B = 189,
	EZI_KEY_KP_C = 190,
	EZI_KEY_KP_D = 191,
	EZI_KEY_KP_E = 192,
	EZI_KEY_KP_F = 193,
	EZI_KEY_KP_XOR = 194,
	EZI_KEY_KP_POWER = 195,
	EZI_KEY_KP_PERCENT = 196,
	EZI_KEY_KP_LESS = 197,
	EZI_KEY_KP_GREATER = 198,
	EZI_KEY_KP_AMPERSAND = 199,
	EZI_KEY_KP_DBLAMPERSAND = 200,
	EZI_KEY_KP_VERTICALBAR = 201,
	EZI_KEY_KP_DBLVERTICALBAR = 202,
	EZI_KEY_KP_COLON = 203,
	EZI_KEY_KP_HASH = 204,
	EZI_KEY_KP_SPACE = 205,
	EZI_KEY_KP_AT = 206,
	EZI_KEY_KP_EXCLAM = 207,
	EZI_KEY_KP_MEMSTORE = 208,
	EZI_KEY_KP_MEMRECALL = 209,
	EZI_KEY_KP_MEMCLEAR = 210,
	EZI_KEY_KP_MEMADD = 211,
	EZI_KEY_KP_MEMSUBTRACT = 212,
	EZI_KEY_KP_MEMMULTIPLY = 213,
	EZI_KEY_KP_MEMDIVIDE = 214,
	EZI_KEY_KP_PLUSMINUS = 215,
	EZI_KEY_KP_CLEAR = 216,
	EZI_KEY_KP_CLEARENTRY = 217,
	EZI_KEY_KP_BINARY = 218,
	EZI_KEY_KP_OCTAL = 219,
	EZI_KEY_KP_DECIMAL = 220,
	EZI_KEY_KP_HEXADECIMAL = 221,
	EZI_KEY_LCTRL = 224,
	EZI_KEY_LSHIFT = 225,
	EZI_KEY_LALT = 226,
	EZI_KEY_LGUI = 227,
	EZI_KEY_RCTRL = 228,
	EZI_KEY_RSHIFT = 229,
	EZI_KEY_RALT = 230,
	EZI_KEY_RGUI = 231,
	EZI_KEY_MODE = 257,
	EZI_KEY_AUDIONEXT = 258,
	EZI_KEY_AUDIOPREV = 259,
	EZI_KEY_AUDIOSTOP = 260,
	EZI_KEY_AUDIOPLAY = 261,
	EZI_KEY_AUDIOMUTE = 262,
	EZI_KEY_MEDIASELECT = 263,
	EZI_KEY_WWW = 264,
	EZI_KEY_MAIL = 265,
	EZI_KEY_CALCULATOR = 266,
	EZI_KEY_COMPUTER = 267,
	EZI_KEY_AC_SEARCH = 268,
	EZI_KEY_AC_HOME = 269,
	EZI_KEY_AC_BACK = 270,
	EZI_KEY_AC_FORWARD = 271,
	EZI_KEY_AC_STOP = 272,
	EZI_KEY_AC_REFRESH = 273,
	EZI_KEY_AC_BOOKMARKS = 274,
	EZI_KEY_BRIGHTNESSDOWN = 275,
	EZI_KEY_BRIGHTNESSUP = 276,
	EZI_KEY_DISPLAYSWITCH = 277,
	EZI_KEY_KBDILLUMTOGGLE = 278,
	EZI_KEY_KBDILLUMDOWN = 279,
	EZI_KEY_KBDILLUMUP = 280,
	EZI_KEY_EJECT = 281,
	EZI_KEY_SLEEP = 282,
	EZI_KEY_APP1 = 283,
	EZI_KEY_APP2 = 284,
	EZI_KEY_AUDIOREWIND = 285,
	EZI_KEY_AUDIOFASTFORWARD = 286,
	EZI_KEY_SCANCODES = 512,
	// End SDL scancode
	
	EZI_KEY_OTHER = 600,

	//  Mouse
	EZI_KEY_LEFTCLICK = 601,
	EZI_KEY_RIGHTCLICK = 602,
	EZI_KEY_MAX
};

typedef struct EZInput EZInput;

EZINPUT_DEF bool EZInput_Return();
EZINPUT_DEF void EZInput_Reset();
EZINPUT_DEF bool EZInput_Pressed(enum EZI_Key button);
EZINPUT_DEF bool EZInput_OnPress(enum EZI_Key button);
EZINPUT_DEF bool EZInput_OnRelease(enum EZI_Key button);
EZINPUT_DEF unsigned int EZInput_MouseX();
EZINPUT_DEF unsigned int EZInput_MouseY();
EZINPUT_DEF void EZInput_Quit();

#endif

#ifdef INCLUDE_EZINPUT_IMPLEMENTATION
#ifndef INCLUDE_EZINPUT_IMPLEMENTATION_GUARD
#define INCLUDE_EZINPUT_IMPLEMENTATION_GUARD
#ifndef _MSC_VER
#ifdef __cplusplus
#define EZINPUT_INLINE inline
#else
#define EZINPUT_INLINE
#endif
#else
#define EZINPUT_INLINE __forceinline
#endif

struct EZInput
{
	bool				quit;

	bool				Pressed[512];
	bool				OnPress[512];
	bool				OnRelease[512];

	bool				leftclic_pressed;
	bool				rightclic_pressed;
	bool				leftclic_OnPress;
	bool				rightclic_OnPress;
	bool				leftclic_OnRelease;
	bool				rightclic_OnRelease;
	unsigned int		mousex;
	unsigned int		mousey;
};

static struct EZInput INTERNAL_EZINPUT_X08xBaA;

EZINPUT_INLINE bool EZInput_Return()
{
	SDL_Event event;
	
	for (int i = 0; i < 512; i++)
	{
		INTERNAL_EZINPUT_X08xBaA.OnPress[i] = 0;
		INTERNAL_EZINPUT_X08xBaA.OnRelease[i] = 0;
	}

	INTERNAL_EZINPUT_X08xBaA.leftclic_OnPress = 0;
	INTERNAL_EZINPUT_X08xBaA.leftclic_OnRelease = 0;
	INTERNAL_EZINPUT_X08xBaA.rightclic_OnPress = 0;
	INTERNAL_EZINPUT_X08xBaA.rightclic_OnRelease = 0;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			INTERNAL_EZINPUT_X08xBaA.quit = 1;
			break;
		case SDL_KEYDOWN:
			if (INTERNAL_EZINPUT_X08xBaA.Pressed[event.key.keysym.scancode] == 0)
			{
				INTERNAL_EZINPUT_X08xBaA.Pressed[event.key.keysym.scancode] = 1;
				INTERNAL_EZINPUT_X08xBaA.OnPress[event.key.keysym.scancode] = 1;
			}
			break;
		case SDL_KEYUP:
			if (INTERNAL_EZINPUT_X08xBaA.Pressed[event.key.keysym.scancode] == 1)
			{
				INTERNAL_EZINPUT_X08xBaA.Pressed[event.key.keysym.scancode] = 0;
				INTERNAL_EZINPUT_X08xBaA.OnRelease[event.key.keysym.scancode] = 1;
			}
			break;
		case SDL_MOUSEBUTTONDOWN:
			if (event.button.button == SDL_BUTTON_LEFT)
			{
				if (INTERNAL_EZINPUT_X08xBaA.leftclic_pressed == 0)
				{
					INTERNAL_EZINPUT_X08xBaA.leftclic_pressed = 1;
					INTERNAL_EZINPUT_X08xBaA.leftclic_OnPress = 1;
				}
			}
			if (event.button.button == SDL_BUTTON_RIGHT)
			{
				if (INTERNAL_EZINPUT_X08xBaA.rightclic_pressed == 0)
				{
					INTERNAL_EZINPUT_X08xBaA.rightclic_pressed = 1;
					INTERNAL_EZINPUT_X08xBaA.rightclic_OnPress = 1;
				}
			}
			break;
		case SDL_MOUSEBUTTONUP:
			if (event.button.button == SDL_BUTTON_LEFT)
			{
				if (INTERNAL_EZINPUT_X08xBaA.leftclic_pressed == 1)
				{
					INTERNAL_EZINPUT_X08xBaA.leftclic_pressed = 0;
					INTERNAL_EZINPUT_X08xBaA.leftclic_OnRelease = 1;
				}
			}
			if (event.button.button == SDL_BUTTON_RIGHT)
			{
				if (INTERNAL_EZINPUT_X08xBaA.rightclic_pressed == 1)
				{
					INTERNAL_EZINPUT_X08xBaA.rightclic_pressed = 0;
					INTERNAL_EZINPUT_X08xBaA.rightclic_OnRelease = 1;
				}
			}
			break;
		case SDL_MOUSEMOTION:
			INTERNAL_EZINPUT_X08xBaA.mousex = event.motion.x;
			INTERNAL_EZINPUT_X08xBaA.mousey = event.motion.y;
			break;
		case SDL_WINDOWEVENT:
			switch (event.window.event)
			{
			case SDL_WINDOWEVENT_RESIZED:
				GPU_SetWindowResolution(event.window.data1, event.window.data2);
				break;
			default:
				break;
			}
		default:
			break;
		}
	}

	return !INTERNAL_EZINPUT_X08xBaA.quit;
}

EZINPUT_INLINE void EZInput_Reset()
{
	int temp2 = INTERNAL_EZINPUT_X08xBaA.quit;
	int mousex = INTERNAL_EZINPUT_X08xBaA.mousex;
	int mousey = INTERNAL_EZINPUT_X08xBaA.mousey;

	memset(&INTERNAL_EZINPUT_X08xBaA, 0, sizeof(EZInput));

	INTERNAL_EZINPUT_X08xBaA.quit = temp2;
	INTERNAL_EZINPUT_X08xBaA.mousex = mousex;
	INTERNAL_EZINPUT_X08xBaA.mousey = mousey;
}

EZINPUT_INLINE bool EZInput_Pressed(enum EZI_Key button)
{
	if (button < 512)
	{
		return INTERNAL_EZINPUT_X08xBaA.Pressed[button];
	}
	if (button > 600 && button < EZI_KEY_MAX)
	{
		if (button == EZI_KEY_LEFTCLICK)
		{
			return INTERNAL_EZINPUT_X08xBaA.leftclic_pressed;
		}
		if (button == EZI_KEY_RIGHTCLICK)
		{
			return INTERNAL_EZINPUT_X08xBaA.rightclic_pressed;
		}
	}
	return false;
}

EZINPUT_INLINE bool EZInput_OnPress(enum EZI_Key button)
{
	if (button < 512)
	{
		return INTERNAL_EZINPUT_X08xBaA.OnPress[button];
	}
	if (button > 600 && button < EZI_KEY_MAX)
	{
		if (button == EZI_KEY_LEFTCLICK)
		{
			return INTERNAL_EZINPUT_X08xBaA.leftclic_OnPress;
		}
		if (button == EZI_KEY_RIGHTCLICK)
		{
			return INTERNAL_EZINPUT_X08xBaA.rightclic_OnPress;
		}
	}
	return false;
}

EZINPUT_INLINE bool EZInput_OnRelease(enum EZI_Key button)
{
	if (button < 512)
	{
		return INTERNAL_EZINPUT_X08xBaA.OnRelease[button];
	}
	if (button > 600 && button < EZI_KEY_MAX)
	{
		if (button == EZI_KEY_LEFTCLICK)
		{
			return INTERNAL_EZINPUT_X08xBaA.leftclic_OnRelease;
		}
		if (button == EZI_KEY_RIGHTCLICK)
		{
			return INTERNAL_EZINPUT_X08xBaA.rightclic_OnRelease;
		}
	}
	return false;
}

EZINPUT_INLINE unsigned int EZInput_MouseX()
{
	return INTERNAL_EZINPUT_X08xBaA.mousex;
}

EZINPUT_INLINE unsigned int EZInput_MouseY()
{
	return INTERNAL_EZINPUT_X08xBaA.mousey;
}

EZINPUT_INLINE void EZInput_Quit()
{
	INTERNAL_EZINPUT_X08xBaA.quit = true;
}

#endif
#endif