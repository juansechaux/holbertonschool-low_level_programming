#include "main.h"

/**
 *create_file - function that create file
 *@filename: pointer string character
 *@text_content: content to open
 *Return: Always 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_write = write(fd, text_content, strlen(text_content));
			if (bytes_write == -1)
			{
				close(fd);
				return (-1);
			}
	}
	close(fd);
	return (1);
}

