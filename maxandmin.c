#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);
    printf("Enter value of C: ");
    scanf("%d", &c);

    int max, min;

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
