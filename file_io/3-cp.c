#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, or exits with 97, 98, 99, 100 on failure
 */
int main(int argc, char *argv[])
{
	int fd, fd1;
	ssize_t w_status;
	ssize_t r_status;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		close(fd);
		exit(99);
	}

	while ((r_status = read(fd, buffer, 1024)) > 0)
	{
		w_status = write(fd1, buffer, r_status);
		if (w_status != r_status)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			close(fd);
			close(fd1);
			exit(99);
		}
	}

	if (r_status == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	return (0);
}

