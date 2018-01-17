#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,arr[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    sort(arr, arr+n);
    puts("Ascending to Descending order: ");
    for(i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
    cout<<endl;
    sort(arr, arr+n, greater<int>());

    puts("Descending to Ascending order: ");
    for(i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
    cout<<endl;

   return 0;
    }

