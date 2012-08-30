//---------------------------------------------------------------------------
// FileFormat1
//---------------------------------------------------------------------------
//                           -=* VPatch *=-
//---------------------------------------------------------------------------
// Copyright (C) 2001-2005 Koen van de Sande / Van de Sande Productions
//---------------------------------------------------------------------------
// Website: http://www.tibed.net/vpatch
//
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
//
// Reviewed for Unicode support by Jim Park -- 08/29/2007

#if !defined(FileFormat1_H)
  #define FileFormat1_H
  #include <iostream>
  #include <vector>
  #include "Checksums.h"
  #include "PatchGenerator.h"
  #include "POSIXUtil.h"

  using namespace std;

  namespace FileFormat1 {
    TFileOffset removeExistingPatch(bistream& in, TFileOffset inSize, bostream& out, TChecksum* removeCRC, bool existanceIsError);
    void writePatch(bostream& patch, bistream& target, vector<SameBlock*>& sameBlocks, TChecksum* sourceCRC, TChecksum* targetCRC, TFileOffset currentFileCount, POSIX::ALT_FILETIME targetTime);
  }

#endif // FileFormat1_H
