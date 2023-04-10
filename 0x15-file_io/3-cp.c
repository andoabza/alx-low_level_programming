#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 1024

static ssize_t read_file(char *file, char **buf, int fd);
static void write_copy(char *file, int fd, char *buf, int len);
/**
 * main - This program copies the content of one file into another
 * @ac: argument count.
 * @av: argoument values.
 *
 * Return: 0 (SUCCESS)
 */
int main(int ac, char *av[])
{
  int fd_0, fd_1, rd_len, err;
  char *buf, *file_from, *file_to;

  buff = NULL;
  rd_len = 1;
  if (ac != 3)
    {
      dprintf(STD_ERR_FILENO, "usage: cp file_from file_to\n");
      exit(97);
    }
  file_from = av[1];
  file_to = av[2];
  fd_0 = open(file_from, O_RDONLY);
  fd_1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664)
    while (rd_len > 0)
      {
       /* Read the content from origin file */
       rd_len = read_file(file_from, &buf, fd_0);
       if (!rd_len)
	 break;
       /* Write out the buffer to destination */
       write_copy(file_to, fd_1, buf, rd_len);
      }
}
