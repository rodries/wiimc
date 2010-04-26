/****************************************************************************
 * WiiMC
 * Tantric 2009
 *
 * settings.h
 * Settings save/load to XML file
 ***************************************************************************/

#include "networkop.h"

enum {
	PLAY_SINGLE,
	PLAY_CONTINUOUS,
	PLAY_SHUFFLE,
	PLAY_LOOP
};

enum {
	LANG_JAPANESE = 0,
	LANG_ENGLISH,
	LANG_GERMAN,
	LANG_FRENCH,
	LANG_SPANISH,
	LANG_ITALIAN,
	LANG_DUTCH,
	LANG_SIMP_CHINESE,
	LANG_TRAD_CHINESE,
	LANG_KOREAN,
	LANG_ROMANIAN,
	LANG_ESTONIAN,
	LANG_LENGTH
};

enum {
	EXIT_AUTO,
	EXIT_WIIMENU,
	EXIT_POWEROFF,
	EXIT_LOADER
};

enum {
	FRAMEDROPPING_DISABLED,
	FRAMEDROPPING_AUTO,
	FRAMEDROPPING_ALWAYS
};

enum {
	SUBTITLE_ALIGN_TOP,
	SUBTITLE_ALIGN_CENTER,
	SUBTITLE_ALIGN_BOTTOM
};

struct SWiiSettings {
	// Global
	int 	hideExtensions;
	int 	language;
	int		volume;
	int		exitAction;
	int		rumble;
	int		subtitleVisibility; // 0 - off, 1 - on
	float 	subtitleDelay; // in secs
	
	// Videos
	float	videoZoomHor; // horizontal zoom amount
	float	videoZoomVert; // vertical zoom amount
	int 	videoXshift;
	int 	videoYshift;
	int 	frameDropping; // FRAMEDROPPING_DISABLED, FRAMEDROPPING_AUTO, FRAMEDROPPING_ALWAYS
	float 	aspectRatio;
	int 	cacheFill;
	float 	audioDelay; // in secs
	int 	autoResume;
	int		seekTime;
	char 	videosFolder[MAXPATHLEN];
	// Music
	int 	playOrder; // PLAY_SINGLE, PLAY_CONTINUOUS, PLAY_SHUFFLE, PLAY_LOOP
	char	musicFolder[MAXPATHLEN];
	// Pictures
	int		slideshowDelay;
	char	picturesFolder[MAXPATHLEN];
	// DVD
	int		dvdMenu;
	// Online Media
	char	onlinemediaFolder[MAXPATHLEN];
	// Network
	SMBSettings smbConf[5];
	FTPSettings ftpConf[5];
};

void DefaultSettings ();
bool SaveSettings (bool silent);
bool LoadSettings ();

extern struct SWiiSettings WiiSettings;

const char validVideoExtensions[][7] =
{
	"3gp", "avi", "asf", "bik", "divx", "dvr-ms", "evo", "flv", "iso", "m1v",
	"m2v", "mkv", "mov", "mp4", "mp4v", "mpe", "mpeg", "mpg", "nsv", "ogm",
	"qt", "rmvb", "swf", "ts", "vob", "vro", "wmv", "y4m", ""
};

const char validAudioExtensions[][5] = 
{
	"aac", "aif", "aiff", "ape", "asf", "flac", "m4a", "m4p", "m4v", "mka",
	"mp2", "mp3", "mpc", "ogg", "ra", "rm", "shn", "m4b", "wav", "wma", "wv", ""
};

const char validImageExtensions[][5] = 
{
	"bmp", "jpeg", "jpg", "png", ""
};

const char validPlaylistExtensions[][5] =
{
	"asx", "m3u", "pls", "plx", "ram", "smil", ""
};
