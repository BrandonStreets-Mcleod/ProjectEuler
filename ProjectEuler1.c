#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc , char ** argv )
{
	int sum = 0;
	int x = 999;
	while (x > 0)
	{
		if (x%3 == 0 || x%5 == 0)
		{
			printf("%d\n", x);
			sum = sum + x;
			x--;
		}
		else
		{
			x--;
		}
	}
	printf("%d", sum);
}