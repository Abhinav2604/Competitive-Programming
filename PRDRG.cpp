#include<bits/stdc++.h>
using namespace std;
unsigned long int val(int n)
{
  if(n==1)
    return 1;
  else if(n%2==0)
     return(2*val(n-1)-1);
  else
     return(2*val(n-1)+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,j;
    t=1;
    int n[6];

    for(i=0;i<=t;i++)
    { if(i==0)
       cin>>t;
      else
       cin>>n[i];
    }
    unsigned long int x;
    unsigned long int y;
  /*  for(i=1;i<=t;i++)
    { x[i]=1;
      y[i]=1;
    unsigned long  int a,b;
        a=1;b=1;
    for(j=1;j<=n[i];j++)
      {
        b=2*b;
        a=b-a;
      }
      if(n[i]%2==0)
      x[i]=b-a;
      else
      x[i]=a;
      y[i]=b;
    }*/
    for(i=1;i<=t;i++)

    {
      x=val(n[i]);
      y=1<<n[i];
      cout<<x<<" "<<y<<" ";
    }


    return 0;
  }
