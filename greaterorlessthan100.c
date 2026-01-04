#include <stdio.h>
int main()
{
	int n;
	printf ("Enter a value: ");
	scanf ("%d",&n);
	if (n<100)
	{
		printf ("%d is less than 100",n);
	}
	else 
	{
		printf ("%d is greater than 100",n);
	}
	return 0;
}
