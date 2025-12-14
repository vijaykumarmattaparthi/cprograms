#include <stdio.h>
void main()
{
        int n, sum=0, r;
        clrscrc();
	printf ("Enter a value: ");
        scanf ("%d",&n);
        while (n=!0)
        {
                r = n % 10;
                sum = sum + r;
                n = n / 10;
        }
        printf("%d",sum);
	getch();
	return 0;
}

