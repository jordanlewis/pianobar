/*
Copyright (c) 2008-2010
	Lars-Dominik Braun <PromyLOPh@lavabit.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#include <waitress.h>

typedef struct {
	char *user;
	char *password;
	char authToken[100];
	char postHost[50];
	char postPort[6];
	char postPath[100];
	WaitressHandle_t waith;
} WardrobeHandle_t;

typedef struct {
	char *artist;
	char *title;
	char *album;
	time_t started;
	time_t length;
} WardrobeSong_t;

typedef enum {WARDROBE_RET_ERR, WARDROBE_RET_OK,
		WARDROBE_RET_CLIENT_BANNED, WARDROBE_RET_BADAUTH,
		WARDROBE_RET_BADTIME, WARDROBE_RET_BADSESSION,
		WARDROBE_RET_CONNECT_ERR} WardrobeReturn_t;

void WardrobeInit (WardrobeHandle_t *wh);
void WardrobeSongInit (WardrobeSong_t *ws);
void WardrobeSongDestroy (WardrobeSong_t *ws);
void WardrobeDestroy (WardrobeHandle_t *wh);
WardrobeReturn_t WardrobeSubmit (WardrobeHandle_t *wh,
		const WardrobeSong_t *ws);
const char *WardrobeErrorToString (WardrobeReturn_t ret);

