/// This can be solved using window slider technic.


#include<bits/stdc++.h>
using namespace std;


int arr[10000],s,i,n,cnt,x;

  set<int>st;

void Find_pair(int arr[], int n,int s)
{
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

int main()
{

   cin>>n>>s;
   for(i=0;i<n;i++)
   {
     cin>>arr[i];

   }

   Find_pair(arr,n,s);

   return 0;
}
