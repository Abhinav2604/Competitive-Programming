#include<iostream>
using namespace std;
int main()
{
  int t,m,n,x,y,i,k,j;
  char a[]="Chefirnemo";
  char b[]="Pofik";
  cin>>t;
  int arr[t];
  for(i=t;i>0;i--)
  {
    cin>>n>>m>>x>>y;
    k=(n-1)%x;
    j=(m-1)%y;
    if((m-2)==(n-2))
    {if ((m-2)==0)
        {arr[i]=1};}
   else if((k==1) && (j==1))
    {
      arr[i]=1;
    }
    else if((k==0) && (j==0))
    {
      arr[i]=1;
    }
    else
     arr[i]=0;
  }
  for(i=t;i>0;i--)
  { if(i==1)
    {if(arr[i]==1)
      cout<<a;
     else
      cout<<b;}
     else if (arr[i]==1)
        cout<<a<<"\n";
      else
        cout<<b<<"\n";
  }
  return 0;
}
