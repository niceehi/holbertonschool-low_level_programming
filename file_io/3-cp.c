#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @arg: An array of pointers to the arguments
 * Return: 0 on success, or exits with 97, 98, 99, 100 on failure
 */
int main(int argc, char *arg[]) 
{
    int fd, fd1; 
    ssize_t w_status;
    ssize_t r_status;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd = open(arg[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", arg[1]);
        exit(98);
    }

    fd1 = open(arg[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd1 == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", arg[2]);
        close(fd);
        exit(99);
    }

    while ((r_status = read(fd, buffer, 1024)) > 0)
    {
        w_status = write(fd1, buffer, r_status);
        
        if (w_status != r_status)
        {
            dprintf(2, "Error: Can't write to %s\n", arg[2]);
            close(fd);
            close(fd1);
            exit(99);
        }
    }

    if (r_status == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", arg[1]);
        exit(98);
    }

    if (close(fd) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
    
    if (close(fd1) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd1);
        exit(100);
    }

    return (0);
}

