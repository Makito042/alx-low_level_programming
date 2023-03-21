#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

/* print lowercase alphabet */
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

/* print uppercase alphabet */
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

/* print new line */
putchar('\n');

return (0);
}

