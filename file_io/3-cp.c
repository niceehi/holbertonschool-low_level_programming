#include "main.h"

/**
 * main - copy a file.
 * @argc: the number of args
 * @argv: the args.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd, fd1;
	int r_status;
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

	fd1 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((r_status = read(fd, buffer, 1024)) > 0)
	{
		if (fd1 == -1 || write(fd1, buffer, r_status) != r_status)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (r_status < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd) < 0)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fd), exit(100);

	if (close(fd1) < 0)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fd1), exit(100);

	return (0);
}


