#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  unsigned long int o,c,k,a,j,i,x,y,l;
  long int d;
  long long int s1,s2,p,q,r,s;
  deque<pair<unsigned long int,long long int>> cb;
  vector<long long int> sum;
  int b,t;
  a=0;
  s1=0;
  t=0;
  b=0;
  p=q=0;
  d=0;
  x=y=0;
  j=i=0;
  r=0;
  cin>>o>>k;
  for(j=0;j<o;j++)
  {
    cin>>b>>c;
    if(b==1|| b==2)
     cin>>d;
    if(b==1)
    {
      c=c^a;
      cb.push_front(make_pair(c,d));
    //  cout<<c<<" "<<d<<"\n";
    }
    else if(b==2)
    {
      c=c^a;
      cb.push_back(make_pair(c,d));
    //  cout<<c<<" "<<d<<"\n";
    }
    else if(b==3)
    {
      c=c^a;
      x=c-k;
      y=c+k;
      p=0;
      q=0;
      r=0;
      s=0;
    //  cout<<"a"<<cb.size()<<"\n";
      l=cb.size();
      //cout<<cb[l-1].second<<"\t";
      for(i=l-1;i<l;i--)
      {

      //  cout<<"a"<<cb[i].first<<" "<<cb[i].second<<"\n";
        if(cb[i].first <= y && cb[i].first >= x)
        {// cout<<" a";
          if(cb[i].second <0 && t==0)
          { t=1;
            q=p;
            s1=cb[i].second;
            p=p+cb[i].second;
          }
          else  if(cb[i].second <0 && t==1)
          { t=0;
            if(q<=p)
            {
              if(p-(q+s1)>p)
              {
                p=p-(q+s1);
                q=p;
                s1=cb[i].second;
                p=p+cb[i].second;
                t=1;
              }
              else
              {
                q=p;
                p=p+cb[i].second;
                s1=cb[i].second;
                t=1;
              }
            }
            else
            {
              if(p-(q+s1)>p)
              {
                p=p-(q+s1);
                q=p;
                s1=cb[i].second;
                p=p+cb[i].second;
                t=1;
              }
              else
              { if(p<0)
                {if(r<q)
                    r=q;
                  q=0;
                  p=0;
                  t=0;
                }
                else
                {if(r<q)
                    r=q;
                  s=p-s1-r;
                  if(s>p)
                  {
                    q=s;
                    p=s;
                  }
                  else
                    q=p;
                  p=p+cb[i].second;
                  s1=cb[i].second;
                  t=1;
                }
              }

            }

          //  p=p+cb[i].second;
          }
          else
          {
            p=p+cb[i].second;
          //  cout<<"b"<<" "<<cb[i].second<<" "<<p<<"\n";
          }

        }

      }
      if(p<q)
      p=q;
    //  cout<<r<<" "<<p<<"\n";
      if(r>p)
      { //cout<<r<<"\n";
        sum.push_back(r);
        a=r;
      }
      else
      {  //cout<<p<<"\n";
         sum.push_back(p);
          a=p;
      }
    }

  }
  for(i=0;i<sum.size();i++)
  {
    cout<<sum[i]<<"\n";
  }
  return 0;
}
