#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fileCopied = 0, copyFile = 0, reader = 1, writer = 1;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	}
	fileCopied = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fileCopied == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	copyFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (argv[2] == NULL || copyFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	while (reader)
	{
		reader = read(fileCopied, buffer, 1024);
		if (reader > 0)
		{
			writer = write(copyFile, buffer, reader);
			if (writer == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fileCopied) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileCopied), exit(100);
	if (close(copyFile) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copyFile), exit(100);
	return (0);
}
