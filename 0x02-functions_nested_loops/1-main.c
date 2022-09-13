#include <stdio.h>
#include "header.h"

int main()
{
	int n, res;

	printf("Please enter number: ");
	scanf("%d", &n);
	
	res = square(n);
	printf("Square of %d is %d\n", n, res);

	return (0);
}

