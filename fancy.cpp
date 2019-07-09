#include <iostream>
#include<cstring>
#include<limits>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,i,j,k;
    i=t=j=k=0;
    cin>>t;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    int c[t]={ };
    for(k=0;k<t;k++)
    {
      string s;
      getline(cin,s);
      //cout<<s.size();
      for(i=0;i<s.size();i++)
      { // cout<<k<<"k\t";
        if((i==0 ||s[i-1]==' ')&& (s[i]=='n'|| s[i]=='N'))
        {

              if(s[i+1]=='o'&& s[i+2]=='t'&&(s.size()-i==3||s[i+3]==' '))
                  {  c[k]=1;
                    break;
                  }

        }
      }
    }

    for(k=0;k<t;k++)
       {
         if(c[k]==1)
            cout<<"Real Fancy\n";
          else
            cout<<"regularly fancy\n";
       }
       return 0;
}
