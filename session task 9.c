#include<stdio.h>//to copy elements of one array into another
void main()
{
    int ary1[100], ary2[100];
    int a, n;   
       printf("\nEnter the number of elements to be stored in the array :");
       scanf("%d", &n);
   
       printf("\nInput %d elements in the array :\n", n);
       for(a = 0; a < n ; a++)
        {
	      printf("element - %d : ", a);
	      scanf("%d", &ary1[a]);
	    }
    /* Copy elements of first array into second array*/ 
    for(a = 0; a < n; a++)
    {
        ary2[a] = ary1[a];
    }

    /* Prints the elements of first array*/
    printf("\nThe elements stored in the first array are :\n");
    for( a = 0; a < n; a++)
    {
        printf("% 5d", ary1[a]);
    }

    /* Prints the elements copied into the second array*/
    printf("\n\nThe elements copied into the second array are :\n");
    for( a = 0; a < n; a++)
    {
        printf("% 5d", ary2[a]);
    }
	       printf("\n\n");
}
