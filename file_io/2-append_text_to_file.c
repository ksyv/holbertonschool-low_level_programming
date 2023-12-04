#include "main.h"
/**
 * create_file - creates a file
 * @filename: file who be created
 * @text_content: text in the file
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fileAddCreator = 0;
	int writer = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	/*Open*/
	fileAddCreator = open(filename, O_APPEND | O_WRONLY);
	if (fileAddCreator == -1)
		return (-1);

	/* write into file */
	writer = write(fileAddCreator, text_content, _strlen(text_content));
	if (writer == -1)
		return (-1);

	/* close file */
	close(fileAddCreator);

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
