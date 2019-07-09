#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define loopi(n) for(ll i=0;i<n;i++)
#define loopd(n) for(ll i=n;i>0;--i)
#define fori(n) for(ll i=1;i<=n;i++)
#define ford(n) for(ll i=n;i>0;--i)
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

ll palin(string s,vector<ll>pos[],ll fixed,ll var)
{ ll count =0;
  bool flag;
  if(fixed<0 || var<0)
    return 0;
  if(fixed>var)
  { ll p=0;
    //ll s;
    ll k=fixed;
    ll  j=var;
    ll i=0;

    while(p<j && i<pos[int(s[k]-'a')].size())
    {

      p=pos[s[k]-'a'][i];
      ++i;
    }

    if(p<j || p>=k)
       return 0;
  //  s=p;
    do{  ll m=0;
             for(ll z=p+0;z<k;z++,m++)
                {if(s[z]==s[k-m])
                     {flag=true;
                       if(k-m-z<=1)
                         break;
                       }
                 else
                    {flag = false;
                      break;}
                    }
                    if(flag)
                     {++count;
                       flag=false;
                     }
                     if(i<pos[s[k]-'a'].size())
                       {p=pos[s[k]-'a'][i];
                       ++i;
                     }

                       if(p>=k)
                       return count;


      }while(p<k);
   }

  else
  {
    ll p=0;
    //  ll s;
      ll k=var;
      ll  j=fixed;

      //cout<<j<<" j k "<<k<<endl;
      ll i=pos[s[j]-'a'].size()-1;
      p=pos[s[j]-'a'][i];
      if(i>0)
        i=i-1;
      while(p>k && ((i)>=0))
      {
           //cout<<"k "<<k<<" "<<p<<" ";             //abcdppddppdrtcba
        p=pos[s[j]-'a'][i];
        i=i-1;
      }

      if(p<=j || p>=k)
         return 0;
      //s=p;
      do{ ll m=0;
               for(ll z=p;z>j;z--,m++)
                  {if(s[z]==s[j+m])
                       {flag=true;
                         if(z-j-m<=1 )
                         break;}
                   else
                      {flag = false;
                        break;}
                      }
                      if(flag)
                       {++count;
                         flag =false;
                       }
                       if((i)>=0)
                         {
                           p=pos[s[j]-'a'][i];
                           //cout<<"i "<<i<<" ";
                           i=i-1;
                           //cout<<i<<" "<<p<<" p\n";
                       }

                         if(p<=j)
                         return count;
        }while(p>j);
  }
return count;
}


int main()
{ std::ios::sync_with_stdio(false);
  string s;
  ll c=0;
  vector<ll> pos[26];
  ll i;
  cin>>s;
  for(i=0;s[i]!='\0';i++)
  {
    pos[s[i]-'a'].push_back(i);
  }
  for(i=0;s[i]!='\0';i++)
  { //cout<<"\nI"<<i<<endl;
    ll k=pos[s[i]-'a'][pos[s[i]-'a'].size()-1];
    if(k>i)
    {

    bool flag=true;
    for(;k>i;)
    {
      ll count=1;
      ll j,l=1;

     for(j=i+1;j<k;j++,l++)
     {
       if((s[j]==s[k-l]) &&(k-l>j))
       {
         count++;
         flag = true;
         //cout<<count<<endl;
       }
       else
         break;
     }

     c=c+ (count*3)-2*(j-k+l==1);
    // cout<<c<<" i"<<i<<" "<<j-k+l<<endl;
     if((j-k+l)==1)
     {
       c=c+k-i-1;
       //cout<<c<<" p";
     }
     else if(k-l==j   &&((j-k+l)!=1))
     {
       c=c+k-i-2;
       //cout<<c<<" q";
     }
     else if(k-l!=j   &&((j-k+l)!=1) &&((k-l-j)!=1))
     { //cout<<"u "<<c<<" ";
       c=c+palin(s,pos,j,k-l) ;              //finding palin starting from j
       //cout<<"u  "<<j<<" "<<k-l<<" "<<palin(s,pos,j,k-l)<<endl;
       c=c+palin(s,pos,k-l,j);
       //cout<<"u "<<palin(s,pos,k-l,j)<<"\n";
     }

  // cout<<c<<"\n";
   flag = false;
   count =0;
   ll o=pos[s[i]-'a'].size()-1;
   ll temp=0;
   while(o>=0)
   {
     temp=pos[s[i]-'a'][o];
     if(temp<k && temp>i)
       {k=temp;
         flag=true;
         //cout<<"k "<<k<<" i "<<i;
         break;}
      --o;
   }
   if(temp!=k)
     break;
    }
  }
  cout<<"i "<<i<<" "<<c<<endl;
  }
  cout<<c;

  return 0;
}
