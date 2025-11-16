#include <stdio.h>
int main ()
{	
	int num;
	printf ("Enter a value:");
	scanf ("%d",&num);
	if (num%2==0)
	{ 
		printf ("Given value is even number\n");
	}
	else
	{
		printf ("Given value is odd number\n");
	}
	return 0;
}
