#include <stdio.h>
#include <math.h>

double square_root(double val)
{
	double ans = 1, sqr = 1, i = 1;
	while (sqr <= val)
	{
		i++;
		sqr = i * i;
	}
	ans = i - 1;
	return ans;
}

int main()
{
	double n;
	scanf("%lf", &n);
	printf("The square root of %d is %lf", (int) n, square_root(n));
	return 0;
}
