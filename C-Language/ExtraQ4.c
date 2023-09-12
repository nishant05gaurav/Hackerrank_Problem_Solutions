// Question:-  Finding Factorial of any number.

// Solution:-  

#include <stdio.h>
int fact(int);

int main()
{
	int n, c;

	printf("Enter Number");
	scanf("%d", &n);
	c = fact(n);
	printf("%d", c);

	return 0;
}

int fact(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else
		return (n * fact(n - 1));
}
