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
	if (argc != 0)
	{
	printf("%d\n", argc);
	};
	return (0);
}
