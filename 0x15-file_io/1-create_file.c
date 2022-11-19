#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to be created
 * @text_content: content writed in the file
 * Return: 1 on success. -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{

	int file;

	int nletters;

	int rw;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)

		text_content = "";


	for (nletters = 0; text_content[nletters]; nletters++)

		;



	rw = write(file, text_content, nletters);



	if (rw == -1)

		return (-1);



	close(file);

	return (1);

}
