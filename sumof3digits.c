#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf ("Enter a 3 digit number:");
	scanf ("%d",&n);
	while (n!=0)
	{
		r = n % 10;
		n = n / 10;
		sum = sum + r;
	}
	printf("%d\n",sum);
	return 0;
}
		

