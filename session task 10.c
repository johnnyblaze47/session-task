#include <stdio.h>//to count total number of duplicates in an array
void main()
{
    int ary1[100];
	int ary2[100];
	int ary3[100];
    int n, mm=1, ctr=0;
    int a, b;	
       printf("\nInput the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("\nInput %d elements in the array :\n",n);
       for(a = 0; a < n; a++)
        {
	      printf("\nelement - %d : ", a);
	      scanf("%d", &ary1[a]);
	    }
/* copy in other array*/
		for(a = 0; a < n; a++)
        {
		ary2[a] = ary1[a];
		ary3[a] = 0;
        }
/* mark the elements are duplicate*/
	for(a = 0; a < n; a++)
        {
		for(b = 0; b < n; b++)
			{
				if(ary1[a] == ary2[b])
				{
				ary3[b] = mm;
				mm++;
				}
			}
			mm = 1;
        }		
/* Prints the array*/
   for(a =0; a < n; a++)
    {
      if(ary3[a] == 2) {ctr++;}  
    }
      printf("\nThe total number of duplicate elements found in the array is: %d \n", ctr);
    
	  printf("\n");		
}
