#include <stdio.h>
int main()
{
	char answer;
	printf ("do you want know my name?\n");
	printf ("If you want to know my name type Y for yes and N for no: ");
	answer = getchar();
	if (answer == 'Y' ||answer =='y')
	{	
		printf ("my name is vijay\n");
	}
	else
	{
		printf ("Thank you");
	}
	return 0;
}	

