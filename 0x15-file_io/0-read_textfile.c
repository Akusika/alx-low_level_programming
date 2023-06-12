#include "main.h"


/**
  * read_textfile- reads text file and prints it to the STDOUT
  * @filename: file to be read
  * @letters: number of letters to read and print
  * Return: actual number of letters read and printd Or 0,
  * if file cannot be opened or read, if filename is NULL and if write fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);

}
