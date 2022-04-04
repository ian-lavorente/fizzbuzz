#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, P = 3, Q = 5;

  for (i = 1; i <= 60; i++)
	{
		if (i % P == 0) printf("Fizz\n");
		else if (i % Q == 0) printf("Buzz\n");
		else if (i % P == 0 && i % Q == 0) printf("Fizz Buzz\n");
		else printf("%d\n", i);
	}

	return 0;
}
