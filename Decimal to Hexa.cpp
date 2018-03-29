#include<bits/stdc++.h>
using namespace std;

int main()
{
 int dec ,i=0,j,temp;
 char array[100];
 cin>>dec;
     while(dec!=0)
     {
         temp=dec%16;
         if(temp<10)
           {
               temp+=48;
           }
           else
           {
               temp+=55;
           }
           array[i]=temp;
            dec=dec/16;
            i++;
      }

        for(j=i-1;j>=0;j--)
        {
        cout<<array[j];
        }
             return 0;
}
