#include <stdio.h>
int main()
{
	int a,b,c,d,e,totalmarks;
	float percentage;

	printf ("Enter your Maths marks: ");
        scanf ("%d",&a);
	if(a>100)
	{	
		printf ("You entered invalid Maths marks!\n");
	}
	
	printf ("Enter your Physics marks: ");
        scanf ("%d",&b);
	if(b>100)
	{
		printf ("You entered invalid Physics marks!\n");
    
	}
	
	printf ("Enter your Biology marks: ");
        scanf ("%d",&c);
	if(c>100) 
	{
		printf ("You entered invalid Biology marks!\n");
	}
	
	printf ("Enter your Chemistry marks: ");
        scanf ("%d",&d);
	if(d>100) 
	{
		printf ("You entered invalid Chemistry marks!\n");
	}
	
	printf ("Enter your English marks: ");
        scanf ("%d",&e);
	if(e>100) 
	{
		printf ("You entered invalid English marks!\n");
	}
	
		totalmarks = a + b + c + d + d;

	printf ("TOTAL MARKS : %d\n",totalmarks);

		percentage = (totalmarks/500)*100;

	printf ("PERCENTAGE : %.2f%\n",percentage);
	
	return 0;
}

