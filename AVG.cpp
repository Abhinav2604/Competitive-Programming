#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,k,i,j,a,a_s;
  long int v,total;
  cin>>t;
  int res[t]={ };
  for(i=0;i<t;i++)
  { a_s=a=0;
    cin>>n>>k>>v;
    total=(n+k)*v;
    for(j=0;j<n;j++)
      {
        cin>>a;
        a_s=a_s+a;
      }
    total=total-a_s;
    if((total/k)>0 && (total%k)==0)
        res[i]=(total/k);
    else
      res[i]=-1;
  }

  for(i=0;i<t;i++)
  {
    cout<<res[i]<<"\n";
  }
  return 0;
}
