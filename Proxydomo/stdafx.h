// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//  are changed infrequently
//

#pragma once

// Change these values to use different versions
#ifdef _WIN64
#define WINVER			0x0600
#define _WIN32_WINNT	0x0600
#else
#define WINVER			0x0501
#define _WIN32_WINNT	0x0501
#endif
#define _WIN32_IE		0x0600
#define _RICHEDIT_VER	0x0200

#define _WTL_NO_CSTRING

#include <atlstr.h>
#include <atlbase.h>
#include <atlapp.h>

extern CAppModule _Module;

#include <atlwin.h>

#include <algorithm>
// for atlframe.h
using std::min;
using std::max;

#include <atlcrack.h>
#include <atlctrls.h>
#include <atlframe.h>
#include <atldlgs.h>
#include <atlsync.h>
#include <atlddx.h>
#include <atlctrlx.h>

#include <cstdint>

#include <string>
#include <memory>
#include <array>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <chrono>
#include <sstream>
#include <regex>
#include <mutex>
#include <thread>
#include <atomic>
#include <fstream>
#include <codecvt>
#include <random>
#include <algorithm>


#if defined _M_IX86
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
