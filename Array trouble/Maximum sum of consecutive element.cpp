#include<bits/stdc++.h>
using namespace std;

int arr[1000000];
int cur_sum;
int cur_max;
int i,n,j;

int largest_sum(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cur_sum+=arr[i];
    if(cur_sum<0) cur_sum=0;
    cur_max=max(cur_max,cur_sum);
  }
  return cur_max;
}


int main()
{
   cin>>n;

   for(i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   cout<<largest_sum(arr,n);

   return 0;
}
