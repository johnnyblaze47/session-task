#include <stdio.h>
int main()
{
  void check(int, int, int);
  int num1, num2, num3;
   
  printf("\nEnter first number: ");
  scanf("%d", &num1);
  printf("\nEnter second number: ");
  scanf("%f", &num2);
  printf("\nEnter third number: ");
  scanf("%d", &num3);
 
  check (num1, num2, num3);
 
  return 0;
}
void check (int a, int b, int c)
 
{
  int maxnum;
 
  if (a >= 0)
    maxnum = a;
  else if (b >= 0)
    maxnum = b;
  else if (c >= 0)
    maxnum = c;
 
 printf("\nThe three numbers entered is %.2d %.2f and %.2d\n", maxnum);
}
