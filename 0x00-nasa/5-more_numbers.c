#include "main.h"
#include <stdio.h>





void more_numbers(void)
{
	int x, y;
	x = 1;
	y = 0;
	while (x <= 10)
	{
		while (y <= 14)
		{
			if (y < 10)
		putchar( y + '0' );
			
			else
			{
		 
                        putchar(y / 10 + '0' );
			putchar(y % 10 + '0' );

			}

			y++;
		}

	}
}
		
