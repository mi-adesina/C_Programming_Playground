#include <stdio.h>

/**
 * main - The entry point
 *
 * Return: 0 (always success)
 */
int main(void)
{
	char f, m, l;
	int age;

	printf("Enter your initials, followed by your age: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My initial are: %c%c%c and my age is %d.\n", f, m, l, age);

	return (0);
}
