#pragma  once

#ifdef _WINDLL
#ifdef DLL_EXPORTS
#define CMKJ_EXPORT __declspec(dllexport)
#else
#define CMKJ_EXPORT __declspec(dllimport)
#endif
#else
#define CMKJ_EXPORT 
#endif