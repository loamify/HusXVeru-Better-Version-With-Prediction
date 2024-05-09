#include "includes/includes.hpp"
#include <iostream>
#include <stdio.h>

#include <Windows.h>
#include <string>
#include "includes/utils.hpp"
#include <urlmon.h>
#include <tchar.h>

#include "general.h"
#include <random>
#include "protect/auth.hpp"

#include <thread>
#include <cstring>
#include <ws2tcpip.h>
#include <winsock2.h>
#include <windows.h>
#include <shellapi.h>

void Print(const std::string& text) {
		std::cout << text;
}

std::thread titleThread;

HWND windowid = NULL;

auto main() -> int
{
	mem::find_driver();
	mouse_interface();

	std::cout << (skCrypt("\n     [+] Waiting For Fortnite | Make Sure You Loaded Driver On Mapper Before")) << std::flush;


	while (windowid == NULL)
	{
		XorS(wind, "Fortnite  ");
		//XorS(wind, "Untitled - Paint");
		windowid = FindWindowA_Spoofed(0, wind.decrypt());
	}
	globals->hwnd = FindWindowA_Spoofed(NULL, "Fortnite  ");
	LI_FN(Sleep)(200);
	std::cout << (skCrypt("\n     [+] Found Fortnite | Harmony.cc Last Build: 4/3/2024")) << std::flush;
	LI_FN(Sleep)(1000);
	mem::find_process("FortniteClient-Win64-Shipping.exe");
	virtualaddy = mem::find_image();
	if (!virtualaddy)
	{
		std::cout << (skCrypt("Load the driver !!!")) << std::flush;
	}
	globals->width = GetSystemMetrics_Spoofed(SM_CXSCREEN); globals->height = GetSystemMetrics_Spoofed(SM_CYSCREEN);

	if (Render->Setup() != RENDER_INFORMATION::RENDER_SETUP_SUCCESSFUL) ExitProcess(0);

	if (Hook->Setup() != HOOK_INFORMATION::HOOKS_SUCCESSFUL) ExitProcess(0);

	if (Game->Setup() != GAME_INFORMATION::GAME_SETUP_SUCCESSFUL) ExitProcess(0);

	Render->Render();

}

