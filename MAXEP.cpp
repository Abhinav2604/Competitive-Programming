#include<iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);
 long  int n,c,i,l,u,a,x,t,y,z;
long  int f=1;
long  int m=1000;
int g=1;
  cin>>n>>c;
  l=1;
  u=n;
long  int k;
/*for(i=1;i<=u;i=i+2)
{
  cout<<1<<" "<<i;
  cin>>x;
  if(x==1)
    { cout<<2<<"\n";
      break;
    }
}
if(x==1)
{
  cout<<1<<" "<<i-1<<"\n";
  cin>>x;
  if(x==1)
     {
       cout<<2<<"\n";
       a=i-2;
     }
  else
    a=i-1;
}
if(i>u)
{
  if(i-u==1)
   {cout<<1<<" "<<u<<"\n";
      cin>>x;
      if(x==1)
      {
        cout<<2<<"\n";
        a=u-1;
      }
      else
       a=u;
    }
  else
    a=u;
}*/

while(f==1)
  { k=10;

      t=(u-l+1)/k;

    if(t<2)
        { t=(u-l+1);
          break;
        }

      n=u;
    //cout<<u<<" "<<l<<"\n";
    for(i=1;i<=k;i++)
    { g=1;
      cout<<1<<" "<<l+i*t-1<<"\n";
      cin>>x;
      if(l+i*t-1==u && x==1)
      { cout<<2<<"\n";
        a=l+i*t-1;
        u=u;
        l=u-t+1;
        g=0;
        break;}
      if(x==1)
      {  cout<<2<<"\n";
         m=m-c-1;
         a=l+i*t-1;
         break;
       }
      else
        --m;
     }
  //   if(g==0)
  //    break;
     if(i<=k && g!=0)
     {
      u=l+i*t-1;
      l=l+i*t-t;
     }
     else if(g!=0)
     {
       u=n;
       l=u-n%k;
     }
     if(m>t+c+1)
       break;
   }

{  for(i=0;i<=t && l+i<=u;i++)
  {
     cout<<1<<" "<<(l+i)<<"\n";
     cin>>x;
     if(x==1)
     {
       cout<<2<<"\n";
          a=l+i;
          break;
     }
  }
}
  cout<<3<<" "<<a;
  return 0;
}
