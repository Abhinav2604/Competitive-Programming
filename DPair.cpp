#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <pair<long long int,long long int>> a;
    vector <pair<long long int,long long int>> b;
// long long int ab[100000];
    unordered_set<long long int> su;
    long long int n,m,i,j,s,l,p,q,al,as,r,t;
    p=q=0;
    r=t=0;
    al=as=l=s=0;
    cin>>n>>m;
    long long int a1[n];
    long long int b1[m];
    for(i=0;i<n;i++)
    {
      cin>>a1[i];
      //a.push_back(make_pair(f,i));
      if(a1[i]>r)
      {
        r=a1[i];
        al=i;
      }
      if(a1[i]<t)
      {
        t=a1[i];
        as=i;
      }
    }
  //  p=q=0;
    for(i=0;i<m;i++)
    {
      cin>>b1[i];
      if(b1[i]>p)
      {
        p=b1[i];
        l=i;
      }
      if(b1[i]<q)
      {
        q=b1[i];
        s=i;
      }
    ///  b.push_back(make_pair(f,i));
  }
  if(p>r)
{   for(i=0;i<n;i++)
  {
    a.push_back(make_pair(i,l));
    su.insert ((a1[i]+b1[l]));
  }
}
else
{ for(i=0;i<m;i++)
  {
    a.push_back(make_pair(al,i));
    su.insert ((a1[al]+b1[i]));
  }
}
if(s<t)
{
   for(i=0;i<n;i++)
  {
    if(su.find((a1[i]+b1[s]))==su.end())
    {  a.push_back(make_pair(i,s));
       su.insert ((a1[i]+b1[s]));
     }
  }
}
else
{
   for(i=0;i<m;i++)
  {
    if(su.find((a1[as]+b1[i]))==su.end())
    {  a.push_back(make_pair(as,i));
       su.insert ((a1[as]+b1[i]));
     }
  }
}



if(su.size()<n+m-1)
    {  for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {if(j==l||j==s)
            break;
          if(su.find((a1[i]+b1[j]))==su.end())
          {
            a.push_back(make_pair(i,j));
            su.insert ((a1[i]+b1[j]));
          }
          if((su.size())>=(n+m-1))
          {
            break;
          }
        }
        if((su.size())>=(n+m-1))
        {
          break;
        }
      }
    }

      for(i=0;i<n+m-1;i++)
      {
        cout<<a[i].first<<" "<<a[i].second<<"\n";
      }
      return 0;
    }
