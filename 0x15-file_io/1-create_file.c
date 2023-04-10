#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
  int err, len, fd;
  err = len = fd = 0;
  if (!filename)
    return (-1);
  fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
  if (fd < 0)
    return (-1);
  while (text_content && text_content[len])
    len++;
  err = write(fd, text_content, len);
  if (err < 0)
    return (-1);
  close(fd);
  return (1);
}
