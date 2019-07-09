#include <bits/stdc++.h>
using namespace std;
void fastscan(long int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}
int main()
{   //ios_base::sync_with_stdio(false);


  long int n,j,t,i;
   fastscan(t);
  int c[t];
  for(i=0;i<t;i++)
  { c[i]=1;
    fastscan(n);
    long int A[n];
    long int B[n],k;
    for(j=0;j<n;j++)
      fastscan(A[j]);
    for(j=0;j<n;j++)
    {
      fastscan(B[j]);
      if(B[j]<A[j])
         c[i]=0;
    }
    if(c[i]==1)
    {for(j=0;j<n-2;j++)
      {
        if(B[j]>A[j])
      { k=A[j];
        A[j]+=(B[j]-k)*1;
        A[j+1]+=(B[j]-k)*2;
        A[j+2]+=(B[j]-k)*3;
      }
      if(A[j+1]>B[j+1] || A[j+2]>B[j+2])
      {
        c[i]=0;
      }
     }
    if(A[n-1]!=B[n-1] || A[n-2]!=B[n-2])
          c[i]=0;
  }
}
  for(i=0;i<t;i++)
  {
    if(c[i]==1)
       cout<<"TAK"<<"\n";
    else
       cout<<"NIE"<<"\n";
  }

  return 0;
}
