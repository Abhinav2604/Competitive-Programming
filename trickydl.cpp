#include<bits/stdc++.h>
using namespace std;
long int lo(long int d2,long int a)
{ long int hu=d2;

  if((a*hu+1-(2^hu))<0)
     { //cout<<"ji";
       return hu--;
     }
  else
    hu++;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long int t,i,a,d2,d1;
  cin>>t;
  d2=d1=0;
  vector<pair<long int,long int>> res;
  //vector<pair<long int,long int>> hi;
  for(i=0;i<t;i++)
  {
    cin>>a;
    d2=int((log2(a/(log(2))))+0.5);

    d1=lo(d2,a);
    res.push_back(make_pair(d1,d2));
  }
  for(i=0;i<t;i++)
  {
    cout<<res[i].first<<" "<<res[i].second<<"\n";
  }
  return 0;
}
