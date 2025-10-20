#include <stdio.h>
int main() 
{
    int divisor, dividend, quotient, remainder;
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    printf("Enter dividend: ");
    scanf("%d", &dividend);

    quotient = dividend / divisor;

    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
