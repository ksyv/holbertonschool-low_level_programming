#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fileToBeCopied = 0, copyFile = 0, reader = 1, writer = 1;
	char buffer[1024];

	/*if there is no the good number of argument*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	}
	/*open the file*/
	fileToBeCopied = open(argv[1], O_RDONLY);
	/*if file from does not exist or cant be read*/
	if (argv[1] == NULL || fileToBeCopied == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	/*create or open new file*/
	copyFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/*if cant creat new file or write in*/
	if (argv[2] == NULL || copyFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	while (reader)
	{
		reader = read(fileToBeCopied, buffer, 1024);
		if (reader > 0)
		{
			writer = write(copyFile, buffer, reader);
			if (writer == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close(reader);
	close(writer);
	return (0);
}
