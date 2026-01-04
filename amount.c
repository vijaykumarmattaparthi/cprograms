#include <stdio.h>
int main()
{
	int amount;
	float intrest,SI,total,period;
	printf ("Enter amount: ");
	scanf ("%d",&amount);
	printf ("Enter intrest rate: ");
	scanf ("%f",&intrest);
	printf ("Enter time period: ");
	scanf ("%f",&period);
 	
	SI = (amount * period * intrest)/100;
	printf ("Simple Intrest is %f\n",SI);
	total = SI + amount;
	printf ("total amount is %f\n",total);
	return 0;
}




