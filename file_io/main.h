#ifndef __IOFILE__
#define __IOFILE__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
#endif
