#include<iostream>
using namespace std;
int main()
{
  long int n,m,i,j,x,y;
  x=0;
  y=0;
  cin>>n;
  long int a[n];
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>m;
  long int b[m];
  for(j=0;j<m;j++)
  {  cin>>b[j];
    for(i=0;i<n;i++)
    {
        if(a[i]==b[j])
        {
          x+=(i+1);
          y+=(n-i);
          i=n;
        }
      }
    }

  /*j=0;
    for(i=0;i<n,j<m;i++)
    {
      if(a[i]==b[j])
      {
        x+=(i+1);
        y+=(n-i);
        i=-1;
        if(j<m)
        {
          ++j;
        }
      }
    }*/

  cout<<x<<" "<<y;
  return 0;

}
