#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,a;
    cin>>t;
    int ch[t];
    for(i=0;i<t;i++)
    { long int n,k,j,count;
      count =0;
      cin>>n>>k;
      int arry[n];
      for(j=0;j<n;j++)
      { cin>>arry[j];
        if(arry[j]>1)
          count++;
      }
      if(count>k)
      ch[i]=0;
      else
      ch[i]=1;
    }
    for(i=0;i<t;i++)
    {
      if(ch[i]==0)
      cout<<"NO\n";
      else
      cout<<"YES\n";
    }
    return 0;
  }
