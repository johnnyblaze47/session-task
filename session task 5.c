#include<stdio.h>//display multiplication table of a given integer
void main()
{
   int a,n;
   printf("\nEnter the number for table to be displayed : ");
   scanf("%d", &n);
   printf("\n");
   for(a = 1; a <= 12 ; a++)
   {
     printf("%d X %d = %d \n", a, n, n*a);
   }
} 
