#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int _putchar(char q);
int *array_range(int mimi, int mama);
int is_digit(char *f);
int _strlen(char *f);
void *malloc_checked(unsigned int k);
void *_calloc(unsigned int nini, unsigned int size);
void *_realloc(void *lala, unsigned int old_size, unsigned int new_size);
void errors(void);
char *string_nconcat(char *a1, char *a2, unsigned int i);
#endif
