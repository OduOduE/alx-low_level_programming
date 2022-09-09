#include <stdio.h>
/**
 * main - Print all combinations of two digit numbers
 *
 * Result:i Always 0 (Success)
 */
int main (void)
{
	int num;
	int nums;

	for (num = 0; num <= 9; num++)
	{
		for (nums = num + 1; nums <= 9; nums++)
		{
			putchar(num + '0');
			putchar(nums + '0');

			if (num < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
