#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');

return (0);
}

