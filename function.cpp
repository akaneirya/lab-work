#include<stdio.h>
// TNRN => take nothing return nothing
void Addition()
{
	int a, b;
	printf(" enter A and B");
	scanf("%d%d", &a, &b);
	
	printf("Addition of a and b: %\n", a+b);
	
}

int main()
{
		printf("before function called");
	Addition(); 
	printf("after function called ");

}