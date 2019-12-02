#include<stdio.h>//display * in triangular row form
void main()
{
	int a, b, c;
	a = 0;
	printf("\nEnter number of rows :");
	scanf("%d", &a);
	printf("\n");
	for(b = 0; b < a; b++)
	{
		printf("\n");
		for(c = 0; c < b; c++)
		printf("*");
	}
}
