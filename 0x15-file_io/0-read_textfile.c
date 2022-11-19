#include "main.h"

/**

 * read_textfile - A function that reads a text file and prints the letters on it.

 * @filename: The name of the file to be read.

 * @letters: numbers of letters printed.

 * Return: numbers of letters printed

 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	int fd;

	ssize_t nd, nr;

	char *buf;

	if (!filename)

		return (0);


	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nd = read(fd, buf, letters);
	nr = write(STDOUT_FILENO, buf, nd);

	close(fd);

	free(buf);

	return (nr);

}
