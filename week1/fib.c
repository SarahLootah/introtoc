#include <stdio.h>

int n, x, y;

int fib(n)
{
	if(n <= 2)
		x = 1;
	else
		x = fib(n - 1) + fib(n - 2);
	return x;
}

int main()
{
	printf("How many fibonacci numbers you would like to calculate?\n");
	scanf(" %d", &y);
	
	for(n = 0; n < y; ++n){
	fib(n);
	printf("%d\n", x);
	}
	
	return 0;
}
