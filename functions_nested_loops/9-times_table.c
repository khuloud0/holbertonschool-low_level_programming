#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: Format matches project example.
 * Uses only _putchar for output.
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;

			if (j == 0)
			{
				/* أول رقم في السطر دائماً 0 */
				_putchar('0');
			}
			else
			{
				/* فاصلة + مسافة */
				_putchar(',');
				_putchar(' ');

				/* محاذاة: رقم خانة واحدة يسبقه مسافة */
				if (p < 10)
				{
					_putchar(' ');
					_putchar(p + '0');
				}
				else
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
