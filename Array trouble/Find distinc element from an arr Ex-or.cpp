#include<bits/stdc++.h>
#define mx 1000000

using namespace std;
typedef long long ll;

int arr[mx],n;
ll res;

int main()
{
  cin>>n;
  for(int i=0;i<n;i++) cin>>arr[i];

  for(int i=0;i<n;i++)
  {
     res=res^arr[i];   ///if same data repeat then op is 0 .at last single data will be store in res;
  }

  cout<<res<<endl;



  return 0;
}
