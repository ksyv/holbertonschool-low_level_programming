#include "main.h"
/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file who be read
 * @letters: ftjh
 * Return: the number of character who be read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t textOfFile = 0, reader = 0, writer = 0;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	/*open*/
	textOfFile = open(filename, O_RDONLY);
	if (textOfFile == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	/* if no buffer */
	if (!buffer)
		return (0);
	/*read*/
	reader = read(textOfFile, buffer, letters);
	/*write in std output*/
	writer = write(STDOUT_FILENO, buffer, reader);
	if ((writer == -1) | (writer != reader))
		return (0);
	/*close*/
	close(textOfFile);
	/* free */
	free(buffer);
	return (writer);
}
