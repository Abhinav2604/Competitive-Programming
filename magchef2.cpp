#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t,i;
    unsigned long long int n,m;
    unsigned long long int k,q,r,s,u,v;
    cin>>t;
    long double p[t];
    for(i=0;i<t;i++)
    {

      cin>>n>>k;
      if(k==0)
      {
        p[i]=(1.00/n);
      }
      else if(n<2*k || n<=k)
      {  p[i]=1;
      //  cout<<1<<" "<<((2*k)-n)<<endl;

       }
      else if(n==1)
        p[i]=1;

      else if( n-2*k==1 || n-2*k==0)
           p[i]=0.5000000;


      else
      {

        if(q%2==0)
        { if(r!=0)
          {
            p[i]=(1.00/(q+2));
          }
          else
            p[i]=(1.00/(q));
       }
       else
       {
          p[i]=(1.00/(q+1));
       }
      //  p[i]=(1.00/(n-2.00*k));
    }
  }
    std::cout.precision(6);
    std::cout.setf( std::ios::fixed, std:: ios::floatfield );
    for(i=0;i<t;i++)
    {
      cout<<p[i]<<"\n";
    }


    return 0;
  }
