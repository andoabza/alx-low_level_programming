#include "main.h"m
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
