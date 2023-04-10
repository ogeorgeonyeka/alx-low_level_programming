#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

/* Declaring Variables */
int count = 0;

if (argc > 0)
{
/*WHILE - print each arguments */
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
