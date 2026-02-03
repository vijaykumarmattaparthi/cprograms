#include <stdio.h>
int main()
{
	int age;
	printf ("Enter your age: ");
	scanf ("%d",&age);
	if (age >= 18)
	{
		if (age >= 60)
		{
			printf ("you are eligible to vote\n");
			printf ("your are senior citizen\n");
		}
		else 
			printf ("you are eligible to vote\n");
	}
	else 
	{
		{
		printf ("you are not eligible to vote\n");
		printf ("you are under 18");
		}
		if (age >= 13)
				printf ("you are teenager\n");
			else 
				printf ("not a teenager\n");
	}
	return 0;
}
