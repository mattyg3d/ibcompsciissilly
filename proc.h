#pragma once

#include <vector>
#include <tchar.h>
#include <stdio.h>
#include <windows.h>
#include <tlhelp32.h>
DWORD getProcID(const wchar_t* procName);

uintptr_t getModuleBaseAddress(DWORD procID, const wchar_t* modName);

uintptr_t findDMAAddy(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int> offsets);
