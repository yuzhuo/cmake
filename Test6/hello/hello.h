#ifndef __HELLO_H__
#define __HELLO_H__

#ifndef _DLLEXPORT_
void __declspec(dllimport) hello();
#else
void __declspec(dllexport) hello();
#endif

#endif