#include "main.h"

/**
 * read_textfile - that reads a text file and prints it to the POSIX std outp
 * @filename: file name
 * @letters: the numbers of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_reads, bytes_written;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);

	if (buff == NULL)
		return (0);
	bytes_reads = read(fd, buff, letters);
	if (bytes_reads == -1)
		return (0);
	buff[letters + 1] = '\0';
	close(fd);

	bytes_written = write(STDOUT_FILENO, buff, bytes_reads);
	if (bytes_written == -1)
		return (0);
	free(buff);
	return (letters);
}
