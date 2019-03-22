#include<bits/stdc++.h>
using namespace std;


int main()
{
  /// x^x+2*x=0;

  int lo,hi,mid,exp;
  lo=0;hi=5;
  while(fabs(hi-lo)>0.0000001)
  {
     mid=(lo+hi)/2;
     exp=mid*mid+2*mid;
     if(exp==0)
     {
       cout<<"X="<<mid<<endl;
       return 0;
     }

     else if(exp<0) lo=mid;
     else hi=mid;
  }
  cout<<"Impossible"<<endl;



   return 0;
}
