#include<bits/stdc++.h>
using namespace std;


int arr[10000],s,i,n,cnt,x;
multiset<int>first;
multiset<int>::iterator it;
set<int>second;
set<int>::iterator itt;
//multimap<int,int>mp;

set<int>st;
int two_sum[10000000];

void Find_pair(int arr[], int n,int s)
{
/// search for two elemet .Also can be solved using window slider technic.
    for(int i=0;i<n;i++)
    {
       int tmp=s-arr[i];

       if(tmp>=0 && st.find(tmp)!=st.end())
       {
          cout<<arr[i]<<" "<<s-arr[i]<<endl;
       }
       st.insert(arr[i]);
    }

}

int k=-1,j;

int main()
{

   cin>>n>>s;

   int arr[]={1,2,3,4,5};
   n=sizeof arr/sizeof arr[0];
   for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
        two_sum[++k]=(arr[i]+arr[j]);
     }
   }


   for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
        first.insert(s-(arr[i]+arr[j]));
     }
   }
   //sort(first.begin(),first.end());

   /*  for(it=first.begin();it!=first.end();it++)
     {
        cout<<*it<<" ";
     }*/


   cout<<cnt<<endl;


   return 0;
}
