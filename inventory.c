#include <stdio.h>
int main()
{
	int quatity1,quatity2,quatity3,quatity4,quatity5;
	float rate1,rate2,rate3,rate4,rate5,discount1,discount2,discount3,discount4,discount5,total;
	char code1[5],code2[5],code3[5],code4[5],code5[5];
	printf ("(1st product)Enter code,quatity,rate and discount: ");
	scanf ("%c%d%f%f,&code1,&quantity1,&rate1,&discount1");
	printf ("(2st product)Enter code,quatity,rate and discount: ");
	scanf ("%s%d%f%f,&code2,&quantity2,&rate2,&discount2");
	printf ("(3st product)Enter code,quatity,rate and discount: ");
	scanf ("%s%d%f%f,&code3,&quantity3,&rate3,&discount3");
	printf ("(4st product)Enter code,quatity,rate and discount: ");
	scanf ("%s%d%f%f,&code4,&quantity4,&rate4,&discount4");
	printf ("(5st product)Enter code,quatity,rate and discount: ");
	scanf ("%s%d%f%f,&code5,&quantity5,&rate5,&discount5");
	total = rate1+rate2+rate3+rate4+rate5;
	
	printf ("\n\n");
	printf ("           INVENTORY REPORT          \n ");
	printf ("----------------------------------------\n");
	printf ("code    quantity     rate     Discount  \n");
	printf ("%s        %d         %f         %f%     \n,code1,quantity1,rate1,discount1");
	printf ("%s        %d         %f         %f%     \n,code2,quantity2,rate2,discount2");
	printf ("%s        %d         %f         %f%     \n,code3,quantity3,rate3,discount3");
	printf ("%s        %d         %f         %f%     \n,code4,quantity4,rate4,discount4");
	printf ("%s        %d         %f         %f%     \n,code5,quantity5,rate5,discount5");
	printf ("----------------------------------------\n,");
	printf ("                           total : %f   \n,total");
}
