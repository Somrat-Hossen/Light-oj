#include<stdio.h>
#include<math.h>
int main()
        {
            int binary,decimal=0,i=0,m,x;
            printf("Enter binary number=");
            scanf("%d",&binary);
            x=binary;

            while(binary!=0)
            {
              m=binary%10;
              decimal=decimal+m*pow(2,i);
              binary=binary/10;
              i++;

            }
            printf("Decimal form of %d is : %d ",x,decimal);


            return 0;
        }
