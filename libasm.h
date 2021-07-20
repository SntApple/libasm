#ifndef _LIBASM_H
#define _LIBASM_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t  ft_strlen(char *s);
char    *ft_strcpy(char *dst, char *src);
int     ft_strcmp(char *a, char *b);
ssize_t  ft_write(int fd, char *buf, size_t size);
ssize_t  ft_read(int fd, char *buf, size_t size);
char    *ft_strdup(char *s);

#endif