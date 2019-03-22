#include<bits/stdc++.h>
using namespace std;

int Binary_search(int arr[],int n,int item)
{
  int lb=0,ub=n-1;
  int mid,index=-1 ;

  while(lb<=ub)
  {
     mid=(lb+ub+1)/2;
     if(arr[mid]==item)
     {
        index=mid;
        ub=mid+1;   ///Find the leftmost one;100=2
                   /// if want right most one then lb=mid+1;
     }
     else if(arr[mid]>item)
     {
        ub=mid-1;
     }
     else lb=mid+1;
  }
  return index;

}

int main()
{
  int arr[]={2,5,100,100,100,101,104,105,110,115,150};
  int n,item;
  cin>>item;

  n=sizeof(arr)/sizeof(arr[0]);

  cout<<Binary_search(arr,n,item)<<endl;

}
