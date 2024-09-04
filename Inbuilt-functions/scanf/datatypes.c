#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	float b;
	char c[10];
	printf("enter the first number in integer:",a);
	scanf("%d",&a);//here %d is denoted as integer value.
		       //here &a is denoting the address of 'a' variable.
	printf("enter the second number in float value :",b);
	scanf("%f",&b);//%f is denoted as float value.
	printf("enter your name:");
	scanf("%s",&c);  //%s is denoted as string.
	printf("You entered integer: %d\n", a);
        printf("You entered float: %.2f\n", b);//here '%.2f'is after decimal point it shows only two values.
        printf("You entered name: %s\n", c);

        return 0;
}
