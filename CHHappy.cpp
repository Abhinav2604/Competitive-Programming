#include<bits/stdc++.h>
using namespace std;
typedef struct {
  long int x=0;
  vector<long int> v;
}yo;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,c=0;
    long int n,j,a;
    cin>>t;
    int test[t]={};
    for(i=0;i<t;i++)
    {
      cin>>n;
      yo e[n+1];
      for(j=1;j<=n;j++)
      {
        cin>>a;
        ++e[a].x;
        e[a].v.push_back(j);
       }

       c=0;
       for(j=1;j<=n;j++)
       { c=0;
         if(e[j].x>1)
         { for(auto k=e[j].v.begin();k!=e[j].v.end();++k)
            {  if(e[*k].x>0)
                  ++c;
                if(c>=2)
                { ++test[i];
                  break;
                }
            }

         }
         if(test[i]>=2)
            break;
       }
    }
    for(i=0;i<t;i++)
    {
      if(test[i]==0)
       cout<<"Poor Chef"<<"\n";
       else
       cout<<"Truly Happy"<<"\n";
    }
    return 0;
  }
