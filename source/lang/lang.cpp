#include "lang/lang.h"
#include <fstream>

#include "common/inifile.h"
#include "lang/langStrings.h"

std::string langs[] = { "de", "en", "es", "fr", "it", "jp"};

void Lang::loadLangStrings(int lang) {
	// Declare variables
	char path[32];
	std::string line;

	// Load app strings
	snprintf(path, sizeof(path), "romfs:/lang/%s/app.ini", langs[lang].c_str());
	CIniFile ini(path);

	// [keyboard]
	Lang::typeName = ini.GetString("keyboard", "typeName", Lang::typeName);

	// [language]
	Lang::language = ini.GetString("language", "ccl", Lang::language);

	// [mainmenu]
	Lang::mainMenu[0] = ini.GetString("mainmenu", "townmanager", Lang::mainMenu[0]);
	Lang::mainMenu[1] = ini.GetString("mainmenu", "editor", Lang::mainMenu[1]);
	Lang::mainMenu[2] = ini.GetString("mainmenu", "settings", Lang::mainMenu[2]);

	// [scan]
	Lang::scan[0] = ini.GetString("scan", "TF", Lang::scan[0]);
	Lang::scan[1] = ini.GetString("scan", "TNF", Lang::scan[1]);
	Lang::scan[2] = ini.GetString("scan", "IDM", Lang::scan[2]);
	Lang::scan[3] = ini.GetString("scan", "IDDM", Lang::scan[3]);
	Lang::scan[4] = ini.GetString("scan", "NCI", Lang::scan[4]);

	// [title]
	Lang::title = ini.GetString("title", "title", Lang::title);

	// [titleSelector]
	Lang::titleSelector[0] = ini.GetString("titleSelector", "title", Lang::titleSelector[0]);
	Lang::titleSelector[1] = ini.GetString("titleSelector", "card", Lang::titleSelector[1]);
	Lang::titleSelector[2] = ini.GetString("titleSelector", "installed", Lang::titleSelector[2]);
}