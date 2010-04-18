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

#ifndef _UI_ACT_H
#define _UI_ACT_H

#include "settings.h"

void BarUiActHelp (BAR_KS_ARGS);
void BarUiActAddMusic (BAR_KS_ARGS);
void BarUiActBanSong (BAR_KS_ARGS);
void BarUiActCreateStation (BAR_KS_ARGS);
void BarUiActAddSharedStation (BAR_KS_ARGS);
void BarUiActDeleteStation (BAR_KS_ARGS);
void BarUiActExplain (BAR_KS_ARGS);
void BarUiActStationFromGenre (BAR_KS_ARGS);
void BarUiActSongInfo (BAR_KS_ARGS);
void BarUiActLoveSong (BAR_KS_ARGS);
void BarUiActSkipSong (BAR_KS_ARGS);
void BarUiActMoveSong (BAR_KS_ARGS);
void BarUiActPause (BAR_KS_ARGS);
void BarUiActRenameStation (BAR_KS_ARGS);
void BarUiActSelectStation (BAR_KS_ARGS);
void BarUiActTempBanSong (BAR_KS_ARGS);
void BarUiActPrintUpcoming (BAR_KS_ARGS);
void BarUiActSelectQuickMix (BAR_KS_ARGS);
void BarUiActQuit (BAR_KS_ARGS);
void BarUiActDebug (BAR_KS_ARGS);
void BarUiActHistory (BAR_KS_ARGS);
void BarUiActBookmark (BAR_KS_ARGS);

#endif /* _UI_ACT_H */
