#include<stdio.h>

int main()
 {
    int n;
    scanf("%d",&n);
   int array[n],i,max,min;
   printf("Enter number\n");

   for(i=0;i<n;i++)
     {
       scanf("%d",&array[i]);
     }
    max=min=array[0];
   for(i=0;i<5;i++)
    {
     if(max<array[i])
      max=array[i];
     if(min>array[i])
        min=array[i];
   }
   printf("The max is=%d\n",max);
   printf("The min is=%d",min);

   return 0;
}
