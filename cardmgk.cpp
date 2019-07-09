#include<iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,i;
  cin>>t;
  int p[t];
  for(i=0;i<t;i++)
  { long int n,j,l,k;
    l=0;k=0;
    cin>>n;
    long int arr[n],darr[n-1];
    for(j=0;j<n;j++)
    {
      cin>>arr[j];
    }
    for(j=0;j<n-1;j++)
    {
      darr[j]=arr[j+1]-arr[j];
      if(darr[j]<0)
          ++l;
    }

    if(l==1)
    {
      if(arr[0]>=arr[n-1])
      p[i]=1;
    }
    else if (l==0) {
      p[i]=1;
    }
    else
    p[i]=0;

  }
  for(i=0;i<t;i++)
  {
    if(p[i]==1)
       cout<<"YES"<<"\n";
    else
       cout<<"NO"<<"\n";
  }
  return 0;
}
