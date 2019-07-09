#include <bits/stdc++.h>


using namespace std;
int main()
{
  long int N;
  long int a;
  cin>>N;
  std::vector<long int> v;
  for(long int i=0;i<N;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  for(long int i=N-2;i>=0;i--)
  {
    if(v[i]!=v[N-1])
    {
      cout<<v[i]%v[N-1];
      break;

    }
  }
  return 0;


}
