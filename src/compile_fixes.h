#ifndef COMPILE_FIXES_H
#define COMPILE_FIXES_H

// Basic type definitions for decompiled code
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned long _DWORD;
typedef unsigned __int64 _QWORD;
typedef bool _BOOL;

// Fastcall calling convention macro
#define __fastcall __stdcall

// Vector types for DirectX
typedef struct _D3DXVECTOR2 {
    float x, y;
} D3DXVECTOR2, *LPD3DXVECTOR2;

typedef struct _D3DXVECTOR3 {
    float x, y, z;
} D3DXVECTOR3, *LPD3DXVECTOR3;

typedef struct _D3DXVECTOR4 {
    float x, y, z, w;
} D3DXVECTOR4, *LPD3DXVECTOR4;

typedef struct _D3DXMATRIX {
    union {
        struct {
            float _11, _12, _13, _14;
            float _21, _22, _23, _24;
            float _31, _32, _33, _34;
            float _41, _42, _43, _44;
        };
        float m[4][4];
        float m[16];
    };
} D3DXMATRIX, *LPD3DXMATRIX;

// Basic Windows types
typedef unsigned long ULONG;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef int BOOL;
typedef char CHAR;
typedef wchar_t WCHAR;
typedef void* PVOID;
typedef const void* PCVOID;

// Common macros
#define TRUE 1
#define FALSE 0

// Function pointer types
typedef void (*PFN_VOID)();
typedef int (*PFN_INT)();

// Memory alignment macros
#define __forceinline __forceinline
#define __declspec(x) __declspec(x)

// SSE intrinsics for vector operations
typedef struct __m128 {
    float m128_f32[4];
} __m128;

// Basic DirectX types
typedef struct _D3DXCOLOR {
    float r, g, b, a;
} D3DXCOLOR, *LPD3DXCOLOR;

typedef struct _D3DVIEWPORT9 {
    DWORD X;
    DWORD Y;
    DWORD Width;
    DWORD Height;
    float MinZ;
    float MaxZ;
} D3DVIEWPORT9, *LPD3DVIEWPORT9;

typedef struct _RECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECT, *LPRECT;

typedef struct _POINT {
    LONG x;
    LONG y;
} POINT, *LPPOINT;

typedef struct _SIZE {
    LONG cx;
    LONG cy;
} SIZE, *LPSIZE;

// ATL and Windows types
typedef struct _tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
} MSG, *PMSG;

// Common ATL macros
#define DECLARE_CLASSFACTORY_EX(x)
#define DECLARE_PROTECT_FINAL_CONSTRUCT()

// Basic string types
typedef struct _BSTR {
    int length;
    wchar_t* buffer;
} BSTR;

// Variant type
typedef struct _tagVARIANT {
    VARTYPE vt;
    union {
        LONG lVal;
        BYTE bVal;
        SHORT iVal;
        FLOAT fltVal;
        DOUBLE dblVal;
        BOOL boolVal;
        SCODE scode;
        CY cyVal;
        DATE date;
        BSTR bstrVal;
        IUnknown* punkVal;
        IDispatch* pdispVal;
        SAFEARRAY* parray;
        BYTE* pbVal;
        SHORT* piVal;
        LONG* plVal;
        LONGLONG* pllVal;
        FLOAT* pfltVal;
        DOUBLE* pdblVal;
        BOOL* pboolVal;
        _VARIANT_BOOL* pboolVal;
        SCODE* pscode;
        CY* pcyVal;
        DATE* pdate;
        BSTR* pbstrVal;
        IUnknown** ppunkVal;
        IDispatch** ppdispVal;
        SAFEARRAY** pparray;
        VARIANT* pvarVal;
        PVOID byref;
        CHAR cVal;
        USHORT uiVal;
        ULONG ulVal;
        ULONGLONG ullVal;
        INT intVal;
        UINT uintVal;
        DECIMAL* pdecVal;
        CHAR* pcVal;
        USHORT* puiVal;
        ULONG* pulVal;
        ULONGLONG* pullVal;
        INT* pintVal;
        UINT* puintVal;
        struct {
            WORD wReserved1;
            __m128 v1;
            __m128 v2;
        } decVal;
    };
} VARIANT, *LPVARIANT;

// DirectX types
typedef struct _D3DXIMAGE_INFO {
    UINT Width;
    UINT Height;
    UINT Depth;
    UINT MipLevels;
    D3DFORMAT Format;
    D3DRESOURCETYPE ResourceType;
    DWORD Usage;
    D3DXIMAGE_FILETYPE FileType;
} D3DXIMAGE_INFO, *LPD3DXIMAGE_INFO;

typedef enum _D3DFORMAT {
    D3DFMT_UNKNOWN = 0,
    D3DFMT_R8G8B8 = 20,
    D3DFMT_A8R8G8B8 = 21,
    D3DFMT_X8R8G8B8 = 22,
    D3DFMT_R5G6B5 = 23,
    D3DFMT_X1R5G5B5 = 25,
    D3DFMT_A1R5G5B5 = 26,
    D3DFMT_A4R4G4B4 = 27,
    D3DFMT_R3G3B2 = 28,
    D3DFMT_A8R3G3B2 = 29,
    D3DFMT_X4R4G4B4 = 30,
    D3DFMT_A8B8G8R8 = 31,
    D3DFMT_X8B8G8R8 = 32,
    D3DFMT_G16R16F = 34,
    D3DFMT_A16B16G16R16F = 35,
    D3DFMT_R32F = 36,
    D3DFMT_R16F = 37,
} D3DFORMAT;

typedef enum _D3DRESOURCETYPE {
    D3DRTYPE_SURFACE = 1,
    D3DRTYPE_VOLUME = 2,
    D3DRTYPE_TEXTURE = 3,
    D3DRTYPE_VOLUMETEXTURE = 4,
    D3DRTYPE_CUBETEXTURE = 5,
} D3DRESOURCETYPE;

typedef enum _D3DXIMAGE_FILETYPE {
    D3DXIMAGE_FILETYPE_UNKNOWN = 0,
    D3DXIMAGE_FILETYPE_BMP = 1,
    D3DXIMAGE_FILETYPE_JPG = 2,
    D3DXIMAGE_FILETYPE_TGA = 3,
    D3DXIMAGE_FILETYPE_PNG = 4,
    D3DXIMAGE_FILETYPE_DDS = 5,
    D3DXIMAGE_FILETYPE_PPM = 6,
    D3DXIMAGE_FILETYPE_DIB = 7,
    D3DXIMAGE_FILETYPE_HDR = 8,
    D3DXIMAGE_FILETYPE_PFM = 9,
} D3DXIMAGE_FILETYPE;

// Basic DirectX function declarations
#ifdef __cplusplus
extern "C" {
#endif

// Basic Windows API functions
#include <windows.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <gdiplus.h>

#ifdef __cplusplus
}
#endif

#endif // COMPILE_FIXES_H