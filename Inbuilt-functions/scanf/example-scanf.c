//scanf is a standard library function used for input. 
//It reads formatted input from the standard input (usually the keyboard) and stores it in the provided variables.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number :",a);
	scanf("%d",&a);
	printf("enter the second number:",b);
	scanf("%d",&b);
	printf("%d,%d is a,b\n",a,b);
	return 0;
}

