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
struct circle
{long int x,y,r;
};
void combinationUtil(circle arr[], circle data[],long int start,long int end,long int index, long int k[],long int count[],long int q);
void printCombination(circle arr[], long int n,long int k[],long int count[],long int q)
{
    circle data[2];
    combinationUtil(arr, data, 0, n-1, 0,k,count,q);
}


void combinationUtil(circle arr[], circle data[], long int start, long int end,long int index,long int k[],long int count[],long int q)
{  long double t,min, max;
  long int i;
    if (index == 2)
    { t=abs(sqrtl((long int)(pow(abs(data[0].x-data[1].x),2)+pow(abs(data[0].y-data[1].y),2) +0.5)));
      if(t>(data[0].r+data[1].r))
       min =(t-data[0].r-data[1].r);
     else if(t<data[0].r || t<data[1].r)
      {
        if(data[0].r>data[1].r)
        min=data[0].r-data[1].r-t;
        else
         min=data[1].r-data[0].r-t;
      }
      else
      min =0;
    for(i=0;i<q;i++)
    {
      if(k[i]>=min)
      {
        if(k[i]<=(t+data[1].r+data[0].r))
        ++(count[i]);

      }
    }
        return;
    }


    for (long int i=start; i<=end && end-i+1 >= 2-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, k,count,q);
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
  long int q,i,j,l,n;
  long double t,min,max;
  fastscan(n);
  fastscan(q);
  circle c[n];
  long int count[q];
  long int k[q];
  for(i=0;i<n;i++)
  {
    fastscan(c[i].x);
     fastscan(c[i].y);
     fastscan(c[i].r);
  }

  for(i=0;i<q;i++)
  { count[i] =0;
    fastscan(k[i]);

  }
  printCombination(c,n,k,count,q);
  for(i=0;i<q;i++)
     cout<<count[i]<<"\n";

return 0;
}
