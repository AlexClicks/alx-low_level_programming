#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: The file to be added text on.
 * @text_content: The content to be added to the file.
 * Return: 1 on success. -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int nletters;
	int rw;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)

 			;

		rw = write(file, text_content, nletters);

		if (rw == -1)
			return (-1);

	}

	close(file);

	return (1);

}
