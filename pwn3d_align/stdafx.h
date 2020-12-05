#pragma once

#include <ntifs.h>
#include <ntddk.h>
#include <ntdddisk.h>
#include <ntddscsi.h>
#include <mountmgr.h>
#include <mountdev.h>
#include <ntddndis.h>
#include <ntimage.h>
#include <scsi.h>
#include <intrin.h>
#include <windef.h>
#include <ntstrsafe.h>

#define TAG					'gtHM'
#define DBGPRINT( x, ... )	DbgPrintEx( NULL, NULL, "[ pwn3d_align ] " x, __VA_ARGS__ );
#define USE_KASPERSKY

#include "winnt.h"
#include "globals.hpp"
#include "tools.h"
#include "kaspersky.hpp"
#include "ssdt.h"
#include "shadow_ssdt.h"
#include "mh_hooks.h"

using namespace hide;