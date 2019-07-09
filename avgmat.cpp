#include<bits/stdc++.h>
using namespace std;
void make(string ch,int j, vector<pair<int,int>> &vect)
{
  for(int i=0;ch[i]!='\0';i++)
  {
    if(ch[i]=='1')
    { 
      vect.push_back(make_pair(j,i+1));
    }
  }
  return ;
}
void manhattan(vector<pair<int,int>> vect, int d[][600], int i)
{
  int  k=vect.size();
  int j;
  for( j=0;j<600;j++)
    d[i][j]=0;
  int l=0;
  for(j=0;j<k;j++)
  {
    for(l=j+1;l<k;l++)
       ++d[i][abs(vect[j].first-vect[l].first)+abs(vect[j].second-vect[l].second)];
  }
  return ;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,i,j;
cin>>t;
int d[t][600];
for(i=0;i<t;i++)
{ vector<pair<int,int>> vect;
  int n,m;
  cin>>n>>m;
  string ch;
  for(j=1;j<=n;j++)
  {
    cin>>ch;
    make(ch,j,vect);
  }
  manhattan(vect,d, i);
  d[i][0]=(n+m-2);
}
for(i=0;i<t;i++)
 {
   for(j=1;j<=d[i][0];j++)
     cout<<d[i][j]<<" ";
   cout<<"\n";
 }
return 0;
}
