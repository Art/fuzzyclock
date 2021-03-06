// Copyright (c) 2009 Michael Chapman (http://fuzzyclock.googlecode.com)
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


#define HT_STRING_SIZE 32
#define TT_STRING_SIZE 48
#define HT_COUNT 12
#define TT_COUNT 13


// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FUZZYHOOK_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FUZZYHOOK_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
//
#ifdef FUZZYHOOK_EXPORTS
#define FUZZYHOOK_API __declspec(dllexport)
#else
#define FUZZYHOOK_API __declspec(dllimport)
#endif


const UINT RWM_TOGGLE = RegisterWindowMessage( _T("RWM_TOGGLE__C8A0D7ED_B4E6_4fbe_A2DA_A5CBF840D3CF") );

FUZZYHOOK_API BOOL Hook( HWND );
FUZZYHOOK_API BOOL Unhook();

FUZZYHOOK_API void SetHourText( int index, LPCWSTR szHourText );
FUZZYHOOK_API void SetTimeText( int index, LPCWSTR szTimeText );

FUZZYHOOK_API void Invalidate();