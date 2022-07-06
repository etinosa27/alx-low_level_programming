#include "main.h"

/**
 * jack bauer - prints all minutes of the day Jack Bauer
 * Return: 0
 */

void jack_bauer(void)
		{
		
		int h1;
		int h2;
		int m1;
		int m2;
		int a = 9;

		h2 = 0;
		while (h2 <= 2)
		{
		if (h2==2)
		{
		/* Restrain to 23h, not 29*/
		a = 3;
		}
		h1 = 0;
		while (h1 <= a)
		{
		m2 = 0;
		while  (m2 <= 5)
		{
			m1 = 0;
			while (m1 <= 9)
			{
				_purchar('0' + h2);
				_purchar('0' + h1);
				_purchar(':');
				_purchar('0' + m2);
				_purchar('0' + m1);
				_purchar('\n');
				m1++;
			}
			m2++;
		}
		h1++;
		}
		h2++;
		}
		}
