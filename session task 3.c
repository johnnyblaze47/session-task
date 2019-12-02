#include<stdio.h>//to check if a candidate's makes him/her eligible for voting
void main()
{
	int age;
	printf("Enter the candidate's age:\n");
	scanf("%d", &age);
	if(age >= 18)
	printf("the candidate is eligible\n");
	else
	printf("The candidate is not eligible\n");
}
