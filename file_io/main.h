#ifndef HOLBERTON_H_
#define HOLBERTON_H_


#include <unistd.h> //  write, read, close
#include <fcntl.h>  // open, O_RDONLY
#include <stdlib.h> // malloc, free

ssize_t read_textfile(const char *filename, size_t letters);

#endif


