#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
       	write(2, msg, 52);
	return 1
}
