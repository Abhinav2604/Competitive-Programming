#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
void combinationUtil(int arr[],int n,int r,int index,int data[],int i,unsigned long long int &u);


void printCombination(int arr[], int n, int r,unsigned long long int &u)
{

    int data[r];
    combinationUtil(arr, n, r, 0, data, 0,u);
}


void combinationUtil(int arr[], int n, int r, int index, int data[], int i,unsigned long long int &u)
{

    if (index == r)
    {
        std::sort(data,data+r);
        //cout<<data[r/2]<<" "<<data[(r/2)-1]<<" "<<r<<endl;
       if(data[r/2]==data[(r/2)-1])
       {// cout<<u<<" ";
         u=u%M;
         ++u;
         u=u%M;
       }
        return;
    }


    if (i >= n)
        return;


    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1,u);


    combinationUtil(arr, n, r, index, data, i+1,u);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,i,j,k,o,a;

  unsigned long long int l,m;

    cin>>t;
    unsigned long long int u, c[t];
    int arry[1001];
    vector<int> farry(2002,0);
    for(i=0;i<t;i++)
    { u=0;
      l=1;
      cin>>n;
      for(j=0;j<n;j++)
        {cin>>arry[j];
          ++farry[j];
        }
        //cout<<arry[0]<<" "<<arry[1]<<" "<<arry[3]<<"\n";
      for(k=2;k<=n;k=k+2)
        {
          printCombination(arry,n,k,u);
        }
        o=n-1;
      while(o>0)
      {
        if(o<30)
          {l=((l%M)*((1<<o)%M))%M;
            o=0;}
        else
        { l=((l%M)*((1<<30)%M))%M;
          o=o-30;
        }
      }
    //  cout<<"\n"<<u<<" "<<l<<endl;
      m=((l%M)+(u%M))%M;
      c[i]=m;
    }

    for(i=0;i<t;i++)
      cout<<c[i]<<"\n";

      return 0;
    }
