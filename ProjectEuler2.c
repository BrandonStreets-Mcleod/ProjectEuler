#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc , char ** argv )
{
	int n1 = 1, n2 = 1, n3 = 2, sum = 0;
	while (n3 < 4000000)
	{
		n3 = n1 + n2;
		sum += n3 * !(n3%2);
		n1 = n2;
		n2 = n3;
	}
	printf("%d", sum);
}