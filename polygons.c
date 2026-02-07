#include <stdio.h>
int main()
{
	int num;
	printf ("Enter a number of sides in polygon (3 to 10): ");
	scanf ("%d",&num);
	if (num == 3)
	{
		printf ("polygon : triangle\n");
	}
	else if (num == 4)
	{
		printf ("polygon : square\n");
	}
	else if (num == 5)
        {
                printf ("polygon : pentagon\n");
        }
	else if (num == 6)
        {       
                printf ("polygon : hexagon\n");
        }       
	else if (num == 7)
        {       
                printf ("polygon : octagon\n");
        }       
	else if (num == 8)
        {       
                printf ("polygon : heptagon\n");
        }       
	else if (num == 9)
        {       
                printf ("polygon : nanagon\n");
        }       
	else 
        {       
                printf ("polygon : decagon\n");
        }       
	
	return 0;

}
