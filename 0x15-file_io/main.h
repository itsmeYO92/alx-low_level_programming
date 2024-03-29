#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
void print_err(int _case, char *file, int fd);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
int create_file(const char *filename, char *text_content);

#endif
