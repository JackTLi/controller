/* Copyright (C) 2013-2017 by Jacob Alexander
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

// ----- Includes -----



// ----- Defines -----

// Helpers
#define _STR_HELPER(x)
#define _STR(x) _STR_HELPER(x)

// You can change these to give your code its own name.
#define STR_MANUFACTURER        L"Input Club"
#define STR_PRODUCT             L"Keyboard - Infinity_60 PartialMap USB"
#define STR_SERIAL              L"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX - mk20dx256"
#define STR_CONFIG_NAME         L"xXXx"


// Strings used in the CLI module
#define CLI_Revision            "51e7d3786670986e2a0ae69399dc303cd10a5f8a"
#define CLI_RevisionNumber      832
#define CLI_RevisionNumberStr   "832"
#define CLI_Version             "0.4.9"
#define CLI_VersionRevision     "2dd024f4a88ea3c53d1d3eac7e6dadcef3f04769"
#define CLI_VersionRevNumber    723
#define CLI_VersionRevNumberStr "723"
#define CLI_Branch              "master"
#define CLI_ModifiedStatus      "Dirty"
#define CLI_ModifiedFiles       "\r\n\tCMakeLists.txt\r\n\tKeyboards/ergodox-l.bash\r\n\tKeyboards/ergodox-r.bash"
#define CLI_RepoOrigin          "git@github.com:kiibohd/controller.git"
#define CLI_CommitDate          "2018-03-18 11:09:55 -0700"
#define CLI_CommitAuthor        "Jacob Alexander <haata@kiibohd.com>"
#define CLI_Modules             "Scan(Infinity_60) Macro(PartialMap) Output(USB) Debug(full)"
#define CLI_BuildDate           "2018-03-21 16:53:30 -0400"
#define CLI_BuildOS             "Generic"
#define CLI_BuildCompiler       "/usr/local/bin/arm-none-eabi-gcc 7.2.1"
#define CLI_Arch                "arm"
#define CLI_Chip                "mk20dx256vlh7"
#define CLI_ChipShort           "mk20dx256"
#define CLI_CPU                 "cortex-m4"
#define CLI_Device              "Keyboard"


// Mac OS-X and Linux automatically load the correct drivers.  On
// Windows, even though the driver is supplied by Microsoft, an
// INF file is needed to load the driver.  These numbers need to
// match the INF file.
#define VENDOR_ID               0x1C11
#define PRODUCT_ID              0xB04D
#define BCD_VERSION             832

