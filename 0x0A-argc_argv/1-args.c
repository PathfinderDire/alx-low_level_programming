#include <stdio.h>

/**
 * main - prints all argumets
 * @argv: argv
 * @argc: argument number
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
