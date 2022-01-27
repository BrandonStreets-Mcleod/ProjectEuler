#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc , char ** argv )
{
	int max = 0;
	int n1, n2, n3;
	for (n1 = 100;n1 < 999;n1++)
	{
		for (n2 = 100;n2 < 999;n2++)
		{
			n3 = n1*n2;
			if (isPalindrome(n3) && n3 > max)
			{
				max = n3;
			}
			
		}
	}
	printf("%d", max);
}

int isPalindrome(int x)
{
	int reverse = 0, t = x;
	while (t) 
	{
		reverse = 10*reverse + (t%10);
		t /= 10;
	}
	return reverse == x;
}