#include<iostream>
using namespace std;
int main()
{
  int t,i;
  cin>>t;
  long int arr[t],j,n,m,l,q;
  long int count[t];
  for(i=0;i<t;i++)
  { cin>>n;
    long int A[n];
    count[i]=0;
    cin>>A[0];
    for(j=1;j<n;j++)
        {cin>>A[j];
          A[j]+=A[j-1];
        }


      for(q=0;q<n-1;)
      {
         q=q+A[q];
         ++count[i];
      }


  }
  for(i=0;i<t;i++)
  {
    cout<<count[i]<<endl;
  }

return 0;

}
