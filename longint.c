#include <stdio.h>
#include <math.h>
int main()
{
	long int a, b, c, d;
	a=pow(1.996, 62);
	b=pow(1.999, 62);
	c=pow(1.998, 62);
	d=pow(1.997, 62);
	printf ("%ld%ld\n", a,b);
	printf ("%ld%ld\n", c,d);

	printf ("%ld%ld\n", a+c, b+d);

	int y = 2147483646;

	printf ("%d\n", y+1);



	return 0;
}