#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *);
void copy_file_content(char *, char *);
int open_file_from(char *);
int open_file_to(char *);
void close_fd(int);


#endif
