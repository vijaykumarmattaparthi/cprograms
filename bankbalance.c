#include <stdio.h>
int main()
{
	int n;
	printf ("Enter your bank balance: ");
	scanf ("%d",&n);
	if ( n==0 )
	{
		printf ("Borrow money\n");
	}
	else 
	{
		printf ("Your bank balance is %d\n",n);
	}
	return 0;
}

