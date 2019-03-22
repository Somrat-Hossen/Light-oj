#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,cnt=0,i,j;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
         cin>>arr[i][j];
     }
    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
         cout<<arr[i][j];
    }
    cout<<endl;
    }

    return 0;
}

