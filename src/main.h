// chrlauncher
// Copyright (c) 2016 Henry++

#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include "resource.h"
#include "rconfig.h"

// config
#define APP_NAME L"chrlauncher"
#define APP_NAME_SHORT L"chrlauncher"
#define APP_VERSION L"1.9.4"
#define APP_VERSION_RES 1,9,4,0
#define APP_COPYRIGHT L"(c) 2016 " _APP_AUTHOR L". All Rights Reserved."

// libs
#pragma comment(lib, "version.lib")
#pragma comment(lib, "ws2_32.lib")

struct STATIC_DATA
{
	BOOL is_silent = FALSE;
	BOOL is_forcecheck = FALSE;

	UINT architecture = 0;

	WCHAR version[32] = {0};
	WCHAR name[64] = {0};
	WCHAR name_full[64] = {0};
	WCHAR type[64] = {0};
	WCHAR binary_dir[MAX_PATH] = {0};
	WCHAR binary_path[MAX_PATH] = {0};
	WCHAR args[1024] = {0};
};

#endif // __MAIN_H__
