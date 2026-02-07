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
	
		totalmarks = a + b + c + d + e;

	printf ("TOTAL MARKS : %d\n",totalmarks);

		percentage = totalmarks / 5;

	printf ("PERCENTAGE : %.f%\n",percentage);
	
    if (percentage > 89)
        printf("Your grade : A+\n");
    else if (percentage > 74)
        printf("Your grade : A\n");
    else if (percentage > 49)
        printf("Your grade : B\n");
    else if (percentage > 34)
        printf("Your grade : C\n");
    else
        printf("You are Failed\n");

	return 0;
}



/*
#include <stdio.h>

int main()
{
    int a, b, c, d, e, totalmarks;
    float percentage;

    printf("Enter your Maths marks: ");
    scanf("%d", &a);

    printf("Enter your Physics marks: ");
    scanf("%d", &b);

    printf("Enter your Biology marks: ");
    scanf("%d", &c);

    printf("Enter your Chemistry marks: ");
    scanf("%d", &d);

    printf("Enter your English marks: ");
    scanf("%d", &e);

    totalmarks = a + b + c + d + e;
    percentage = totalmarks / 5.0;

    printf("TOTAL MARKS : %d\n", totalmarks);
    printf("PERCENTAGE : %.2f%%\n", percentage);

    if (percentage > 89)
        printf("Your grade : A+\n");
    else if (percentage > 74)
        printf("Your grade : A\n");
    else if (percentage > 49)
        printf("Your grade : B\n");
    else if (percentage > 34)
        printf("Your grade : C\n");
    else
        printf("You are Failed\n");

    return 0;
}
*/
