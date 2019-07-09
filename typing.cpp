#include<iostream>
#include<cstring>
using namespace std;
int sear(string gh[], string ch, int i)
{ int a;
  for(a=0;a<i;a++)
  {
        if(gh[a]==ch)
           return a;
  }
  return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,z;
    cin>>z;
    const int t=z;
    float ti[t];
    for(i=0;i<t;i++)
    {

      ti[i]=0;
      int n,j,z;
      cin>>n;
      float tim[n];

      string ch,gh[n];
      for(j=0;j<n;j++)
      { tim[j]=0;
        int l=0; int r=0;
        int k=0;
        cin>>ch;
         gh[j]=ch;
        z=sear(gh,ch,j);
        if(z==-1)
      {  while(ch[k]!='\0')
        {
          if(ch[k]=='d' || ch[k]=='f')
          { if(l==0)
              tim[j]+=0.2;
            if(l==1)
              tim[j]+=0.4;
            l=1;
            r=0;
          }

          if(ch[k]=='j' || ch[k]=='k')
          { if(r==0)
              tim[j]+=0.2;
            if(r==1)
              tim[j]+=0.4;
            l=0;
            r=1;
          }
          k++;
        }
        ti[i]+=tim[j];
       }
       else
          ti[i]+=(tim[z]/2);
      }

    }
    for(i=0;i<t;i++)
    {  cout<<ti[i]*10<<"\n";
      }
  return 0;
}
