#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *mimi, unsigned int old_size, unsigned int new_size);
void errors(void);
int _putchar(char c);
int *array_range(int min, int max);
int is_digit(char *s);
int _strlen(char *s);
#endif
