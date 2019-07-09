#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n,k,q,i,j,c_1,c_2,c_3,c_4,l,m,r,s,o,z,t;
    int y,a;
    cin>>n>>q>>k;
     deque<int> v;
    char c;
    o=c_1=c_2=c_3=c_4=0;
    for(i=0;i<n;i++)
    { cin>>a;
      v.push_back(a);
      if(a==0)
        o=0;

      else
      {
        ++o;
        if(o>c_1)
        {
          c_1=o;
          m=i;
          l=i-c_1+1;
          if(l==0)
          {
            c_2=c_1;
          }
        }
        else if(o>=c_4)
        {
          c_4=o;
          s=i;
        }
        if(i==n-1)
        {c_3=o;}
      }
    }

    z=0;
    for(j=0;j<q;j++)
    { cin>>c;
      if(c=='!')
      {
      /*  a=v.back();
        v.push_front(a);
        v.pop_back();*/
        if(m==n-1)
        { c_1=c_1-1;
          if(c_3==0)
          {c_3=c_1;
            c_2=1;
            z=1;
          }
          if(c_4>c_1)
          { t=c_1;
            c_1=c_4;
            c_4=t;
            ++s;
            m=s;
          }

        }
        else
        {   ++m;
             ++s;
          }
        if(c_3>0)
        {if(z==1)
          {z=0;}
          else
          {
            --c_3;
            ++c_2;
          }
          if(c_2>c_1)
          {
            c_1=c_2;
            m=c_1-1;
          }
          else if(c_2>=c_4)
          {
            c_4=c_2;
            s=c_2-1;
          }
        }
    /*  for(auto w=v.begin();w!=v.end();++w)
            cout<<*w<<" ";
            cout<<endl;*/
      }


      else if(c=='?')
      {  /*c_1=0; o=0;
        for(auto w=v.begin();w!=v.end();++w)
        {
          if(*w==0)
            o=0;

          else if(*w==1)
          {  ++o;
          }

          if(o>c_1)
            c_1=o;
          }*/
          if(c_1>=k)
          cout<<k<<"\n";
          else
          cout<<c_1<<"\n";
      }
    }

    return 0;
    }
