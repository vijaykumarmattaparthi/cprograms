#include <stdio.h>

int main() {
    float a, b, c, d;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &a, &b);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c, &d);
    printf("\nSum = %.2f + %.2fi", a + c, b + d);
    printf("\nProduct = %.2f + %.2fi\n", (a*c - b*d), (a*d + b*c));

    return 0;
}
