#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter First Number: \n");
	scanf("%d",&a);
	printf("Enter Second Number: \n");
	scanf("%d",&b);
	printf("AFTER SWAPPING\n");
	a = a+b;
	b = a-b;
	a = a-b;
	printf("First Number=%d \nSecond Number=%d", a,b);
}
