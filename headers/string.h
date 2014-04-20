#ifndef __V8SA_STRING_H__
#define __V8SA_STRING_H__

#include <stddef.h>

void * memcpy(void * dest, const void * src, size_t len);
char * strcpy(char * dest, const char * str);
size_t strlen(const char * str);
int strcmp(const char * str1, const char * str2);
int memcmp(const void * ptr1, const void * ptr2, size_t len);

#endif