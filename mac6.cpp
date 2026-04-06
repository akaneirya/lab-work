#include<stdio.h>

int main()
{
	int radius, area;

	
	
	 printf("enter area of circle:");
	 scanf("%d", &area);
	
	 printf("enter radius of circle:");
	 scanf("%d", &radius);
	 
	 area = 3.14 * radius * radius;
	 
	 printf("area of circle = %d\n", area);
}