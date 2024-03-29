#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nread = read(fd, buf, letters);
	if (nread == -1)
		return (0);

	nwrite = write(STDOUT_FILENO, buf, nread);
	if (nwrite == -1)
		return (0);

	close(fd);

	free(buf);

	return (nwrite);
}
