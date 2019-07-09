#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long int n,a,b,x,y,l,m,k,xd,yd;
a=b=x=y=l=m=k=0;
long int draw=0;
//vector<pair<long int, long int>> score;
cin>>n;
for(long int i=0;i<n;i++)
  {
    cin>>x>>y;
    l=x;
    m=y;
    xd=x-a;
    yd=y-b;
    if(x>y)
    {
     k=abs(a-b);
      if(xd>yd)
      {
        draw=draw+xd+k;
      }
    }
    /*
    x=x-a;
    y=y-b;
    if(x==0 && y==0)
    {
      ;
    }
    else if(x==0 && a!=0)
      {  x=l;
        if(x<b)
         ;
        else if(m>x)
          draw=draw+1;

      }
    else if(y==0 && b!=0)
    {
      y=m;
       if(y<a)
        ;
       else if(l>y)
         draw=draw+1;

     }

    else if(x>y)
      {
        draw=draw+y;
      }
    else
      draw=draw+x;*/
    a=l;
    b=m;
  }
 cout<<draw+1;
 return 0;
}
