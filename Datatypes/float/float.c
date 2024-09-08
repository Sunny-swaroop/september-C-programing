#include<stdio.h>
int main()
{
        float x = 5.75f;
        float y = 2.5f;

    	float sum = x + y;
    	float difference = x - y;
    	float product = x * y;
    	float quotient = x / y;

    	printf("Sum: %.2f\n", sum); // Print with 2 decimal places
    	printf("Difference: %.2f\n", difference);
    	printf("Product: %.2f\n", product);
    	printf("Quotient: %.2f\n", quotient);

    	return 0;
}
