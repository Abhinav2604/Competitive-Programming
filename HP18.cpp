#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b;
    long int n,j,l,countab,counta,countb;
    vector<long int> arr;
    t=a=b=0;
    cin>>t;
    int res[t]={ };
    for(int i=0;i<t;i++)
    {
      cin>>n>>a>>b;
       countab=counta=countb=0;
      for(j=0;j<n;j++)
      {
        cin>>l;
        arr.push_back(l);
        if(((l%a)==0) && ((l%b)==0))
        {
           ++countab;
        }
        else if((l%b)==0)
        {
          ++counta;
        }
        else if((l%a)==0)
        {
          ++countb;
        }
      }
      if(countab>0)
      {  if(countb+1>counta)
           res[i]=1;
        else
           res[i]=2;

      }
      else
      {if(countb>counta)
          res[i]=1;
      else
         res[i]=2;

      }


    }
  for(int i=0;i<t;i++)
    {  if(res[i]==1)
          cout<<"BOB\n";
       else
         cout<<"ALICE\n";
    }
    return 0;
  }
