/****************************************************************************
 * WiiMC
 * Tantric 2009
 *
 * menu.h
 * Menu flow routines - handles all menu logic
 ***************************************************************************/

#ifndef _MENU_H_
#define _MENU_H_

#include <ogcsys.h>

void WiiMenu();
void MPlayerMenu();
void ErrorPrompt(const char * msg);
int ErrorPromptRetry(const char * msg);
void InfoPrompt(const char * msg);
void ShowAction (const char *msg);
void CancelAction();
void ShowProgress (const char *msg, int done, int total);
int WindowPrompt(const char *title, const char *msg, const char *btn1Label, const char *btn2Label);
void ResetText();
void UpdateVideobarPauseBtn(bool paused);

extern "C" {
void SetStatus(const char * txt);
bool StatusSet();
}

extern int menuCurrent;
extern bool inPlaylist;
extern int doMPlayerGuiDraw;
extern bool nowPlayingSet;

enum
{
	MENU_BROWSE_VIDEOS,
	MENU_BROWSE_MUSIC,
	MENU_BROWSE_PICTURES,
	MENU_DVD,
	MENU_BROWSE_ONLINEMEDIA,
	MENU_SETTINGS,
	MENU_SETTINGS_GLOBAL,
	MENU_SETTINGS_VIDEOS,
	MENU_SETTINGS_MUSIC,
	MENU_SETTINGS_PICTURES,
	MENU_SETTINGS_NETWORK,
	MENU_SETTINGS_NETWORK_SMB,
	MENU_SETTINGS_NETWORK_FTP,
	MENU_SETTINGS_SUBTITLES
};

#endif
