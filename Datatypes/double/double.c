//The double data type is used to represent double-precision floating-point numbers. 
 //This provides a higher level of precision compared to float, making it suitable for calculations requiring more accuracy.
#include<stdio.h>
int main()
{
	float f = 1.0f / 3.0f;
    	double d = 1.0 / 3.0;
    	long double ld = 1.0L / 3.0L;

    	printf("Float value: %.7f\n", f);
    	printf("Double value: %.15f\n", d);
    	printf("Long double value: %.18Lf\n", ld);

 	return 0;
}
