/* 
  Copyright (c) 2002 Robert Rainwater
  Contributors: Justin Frankel, Fritz Elfert, Amir Szekely and
                Jim Park (Unicode Support)

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

  Unicode support by Jim Park -- 08/17/2007
*/

#ifdef _UNICODE
#  define WIDEN2(x) L ## x
#  define WIDEN(x) WIDEN2(x)
#  define REALSTR(x) WIDEN2(#x)
#  define STR(x) REALSTR(x)
#  ifdef RELEASE
     const wchar_t *NSISW_VERSION = L"MakeNSISW " STR(RELEASE) L" (Unicode NSIS Compiler Interface)";
#  else
     const wchar_t *NSISW_VERSION = L"MakeNSISW " WIDEN(__DATE__) L" (Unicode)";
#  endif
#else
#  define REALSTR(x) #x
#  define STR(x) REALSTR(x)
#  ifdef RELEASE
     const char *NSISW_VERSION = "MakeNSISW " STR(RELEASE) " (NSIS Compiler Interface)";
#  else
     const char *NSISW_VERSION = "MakeNSISW " __DATE__;
#  endif
#endif
