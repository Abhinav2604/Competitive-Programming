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
    long long int n,m,i,j,s,l,p,q;
    p=q=0;
    cin>>n>>m;
    long long int a1[n];
    long long int b1[m];
    for(i=0;i<n;i++)
    {
      cin>>a1[i];
      //a.push_back(make_pair(f,i));
    }
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
   for(i=0;i<n;i++)
  {
    a.push_back(make_pair(i,l));
    su.insert ((a1[i]+b1[l]));
  }
   for(i=0;i<n;i++)
  {
    if(su.find((a1[i]+b1[s]))==su.end())
    {  a.push_back(make_pair(i,s));
       su.insert ((a1[i]+b1[s]));
     }
  }



if(su.size()<n+m-1)
    {  for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
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
