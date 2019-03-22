#include<stdio.h>
int main()
     {    //freopen("in.txt","r","stdin");
         int i,j,sum=0,a[3][3],sum1=0,sum2=0,sum3=0,n;
         scanf("%d",&n);
         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 scanf("%d",&a[i][j]);
             }
         }

         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d\t",a[i][j]);
                 if(i==j)
                 {
                     sum=sum+a[i][j];
                 }
                 if(i+j==n-1)
                 {
                     sum1+=a[i][j];
                 }
                  if(i==0||j==0||i==n-1||j==n-1)
                 {
                     sum2+=a[i][j];
                 }
                  if(i!=0||j!=0||i!=n-1||j!=n-1)
                 {
                     sum3+=a[i][j];
                 }
             }
             printf("\n");
         }
         printf("The sum of the array:%d\n",sum);
          printf("The sum of second array:%d\n",sum1);
          printf("The sum of second array:%d\n",sum2);
          printf("The sum of second array:%d\n",sum3);
         return 0;
     }
