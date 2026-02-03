#include <stdio.h>
#include <string.h>
int main()
{
	char name[20],category[20];
	int marks,bonusmarks,totalmarks;
	
	printf ("Enter student name: ");
	scanf ("%s",name);
	printf ("Eneter student marks: ");
	scanf ("%d",&marks);
	
	bonusmarks = 20;
	
	printf ("category:");
	scanf ("%s",category);
	if (strcmp(category, "SPORTS") == 0)
	{
		totalmarks = marks + bonusmarks;
	}
	printf ("Total Marks: %d\n",totalmarks);
	
/*	printf ("Enter Y if you are in sports and N if you are not in sports: ");
	scanf ("%s",s);

	if (s == Y)
	{
		marks = marks + bonusmarks;
	}
	else 
	{
		marks = marks;
	}*/
	
	return 0;
}
