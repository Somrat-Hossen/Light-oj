#include <bits/stdc++.h>
#define mx 100000
typedef long long ll;
using namespace std;



int main()
{
  int two[1000][1000];
  int csum[1000][1000];
  int n;


  int i,j,res,a,b,c,d,sum;
  cin>>n;

  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
        cin>>two[i][j];
     }
  }
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
        cout<<two[i][j]<<" ";
     }
     cout<<endl;
  }

  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
       if(i==0 && j==0) csum[i][j]=two[i][j];

       else if(i==0 && j>0) csum[i][j] =csum[i][j-1]+two[i][j];

       else if(i>0 && j==0) csum[i][j]=csum[i-1][j]+two[i][j];

      else csum[i][j]=csum[i-1][j]+csum[i][j-1]-csum[i-1][j-1]+two[i][j];
     }
  }
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
        cout<<csum[i][j]<<" ";
     }
     cout<<endl;
  }
   cin>>a>>b>>c>>d;   ///(r1,c1) (r2,c2) find sum between these two index

   res=csum[c][d]-csum[a-1][d]-csum[c][b-1]+csum[a-1][b-1];
   cout<<res<<endl;




    return 0;
}


