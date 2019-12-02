#include<stdio.h>//display n terms of odd natural numbers and sum
void main()
{
   int x, n, sum = 0;

   printf("\nEnter number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(x = 1; x <= n; x++)
   {
     printf("\n%d ", 2*x-1);
     sum += 2*x-1;
   }
   printf("\nThe Sum of odd Natural Number of %d terms are: %d \n", n, sum);
}
