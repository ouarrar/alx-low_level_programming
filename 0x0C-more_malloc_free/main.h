#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
int _strlen(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif