#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
int _putchar(char);
char *_strcat(char *dest, char *src);
char *_strcat(char*, char*);
char *_strncat(char*, char*, int);
char *_strncpy(char*, char*, int);
char *leet(char *);
int _strcmp(char*, char*);
void reverse_array(int*, int);
char *string_toupper(char*);
char *cap_string(char*);
char *rot13(char*);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
#endif
