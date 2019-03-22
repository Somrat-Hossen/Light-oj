#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

int main()
 {
      freopen("in.txt","r",stdin);
     int a[100],i,j,n,x;
     vector<int>vec[100];
     cin>>n;

     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }

     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
              x=a[j];
             if(x==i)
             {
                vec[x].push_back(j);
             }
         }
     }
     for(i=0;i<n;i++)
     {
         cout<<i<<":";
         for(j=0;j<(int)vec[i].size();j++)
         {
             cout<<vec[i][j]<<" ";
         }
         cout<<endl;
     }


    return 0;
  }

