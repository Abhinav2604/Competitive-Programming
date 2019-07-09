#include<bits/stdc++.h>
using namespace std;
int countSetBits(long int n)
{
    // base case
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}
int binomialCoeff(int n, int k)
{   if(n==0 || n<k )
     return 1;
    int res = 1;
    if ( k > n - k )
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

long int Count(int k,int l, int j,int z,int y)
{
  long int t=0;
  if(j>l)
     l=j;
  for(int i=0;i<=z;i++)
      t+=binomialCoeff(k,l-y-i);

  return t;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,i;
  cin>>t;
  long int a,b,c,p,r,q,count[t];
  for(i=0;i<t;i++)
  { int l,j,k,x,y,z;
    cin>>a>>b>>c;
    l=countSetBits(a);
    j=countSetBits(b);
    p=a^b;
    q=a&b;
    x=countSetBits(p);
    y=countSetBits(q);
    q=q<<1;
    z=countSetBits(p&q);
    k=x;
     count[i]=Count(k,l,j,z,y);
  }
  for(i=0;i<t;i++)
    cout<<count[i]<<"\n";
    return 0;

}
