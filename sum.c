#include <stdio.h>
void main()
{
   int a[5]={1,2,3,4,5},i,sum;
   sum=0;
   for(i=0;i<5;i++)
     sum=sum+a[i];
   printf("the sum %d",sum);
}   
