#pragma once

#include <ntifs.h>
#include <windef.h>

#define log( format, ... ) DbgPrintEx( DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, "[ KasperskyHook ] " format "\n", ##__VA_ARGS__ )

namespace utils
{
	uintptr_t find_pattern    ( const uintptr_t base, const size_t size, const char* bmask, const char* szmask );
	uintptr_t find_pattern_km ( const wchar_t* szmodule, const char* szsection, const char* bmask, const char* szmask );
}