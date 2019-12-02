#include<stdio.h>//display vertical multiplication table form 1 to n
void main()
{
   int x, y, n;
   printf("\nEnter upto the table number beginning from 1 : ");
   scanf("%d", &n);
   printf("\nMultiplication table from 1 to %d \n",n);
   for(y = 1; y <= 12; y++)
   {
     for(x = 1; x <= n; x++)
     {
       if (x <= n-1)
           printf("%dx%d = %d, ", x, y, y*x);
          else
	    printf("%dx%d = %d", x, y, y*x);

      }
     printf("\n");
    }
} 
