#ifndef __IO_H__
#define __IO_H__

#include "general.h"
#include "interfaz.h"

#define MAX_CAR 0x100

#ifdef __cplusplus
extern "C"
{
#endif

int repeat (void);  /* true if users wants to repeat */
void load (const char *filename, char storage[SIZE][SIZE]);
void dump (char board[SIZE][SIZE]); /* dump data to screen */
void ask_coordinates (int *y, int *x, const char *name);
void title(const char *s);

#ifdef __cplusplus
}
#endif

#endif
