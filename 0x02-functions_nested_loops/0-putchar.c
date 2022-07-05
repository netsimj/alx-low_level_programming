#include "main.h"

<<<<<<< HEAD
/** main - prints putchar 
 * Return; always 0
   */
 * int main(void)
 * {
       _putchar('_');
       _putchar('p');
       _putchar('u');
       _putchar('t');
       _putchar('t');
       _putchar('h');
       _putchar('a');
       _putchar('r');
       _putchar('\n');

      return (0);
=======
/**
 * main - Print "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char name_of_school[] = "main";

	while (i < 9)
	{
		_putchar(name_of_school[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
>>>>>>> e79bf3d2f1e19637c4398c1e7df865ef01218974
