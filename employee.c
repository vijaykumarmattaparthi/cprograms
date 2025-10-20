#include <stdio.h>
int main ()
{
         char name[0];
         int age , employeenumber ,departmentnumber;
         printf("enter your name:");
         scanf("%s",name);
         printf("enter your age:");
         scanf("%d",&age);
	 printf("enter your employeenumber:");
         scanf("%d",&employeenumber);
	 printf("enter your departmentnumber:");
         scanf("%d",&departmentnumber);
         printf("\nHello, %s! You are %d years old,your employee no is %d and your department no is %d.\n", name, age,employeenumber,departmentnumber);
         return 0;
}

