#include "main.h"
/**
 * create_file - creates a file
 * @filename: file who be created
 * @text_content: text in the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fileCreator = 0;
	int writer = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	/*Open*/
	fileCreator = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileCreator == -1)
		return (-1);

	/* write into file */
	writer = write(fileCreator, text_content, _strlen(text_content));
	if (writer == -1)
		return (-1);

	/* close file */
	close(fileCreator);

	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: variable insert
 * Return: number of characters
 */
int _strlen(char *s)
{
	int ns = 0, p = 0;

	while (s[p] != 0)
	{
		ns++;
		p++;
	}
	return (ns);
}
