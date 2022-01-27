#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc , char ** argv )
{
	unsigned long long n = 600851475143ULL;
	unsigned long long i;

	for (i = 2ULL; i < n; i++) 
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%llu\n", n);
}