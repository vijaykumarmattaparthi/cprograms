#include <stdio.h>
int main ()
{	
       	 char name[0];
	 int age;
	 printf("enter your name:");
	 scanf("%s",name);
	 printf("enter your age:");
	 scanf("%d",&age);
	 printf("\nHello, %s! You are %d years old.\n", name, age);
	 return 0;
}
