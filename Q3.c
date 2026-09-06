#include<stdio.h>
int main()
{
	int dist;
	printf("enter distance in kilometers\n");
	scanf("%d",&dist);
	int meters = dist*1000;
	int centi = meters*100;
	printf("Distance in meters is: %d \nDistance in Centimeters is: %d" , meters, centi);
}
