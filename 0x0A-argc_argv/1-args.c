#include <stdio.h>

/**
 * main - prints all argumets
 * @argv: argv
 * @argc: argument number
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
