#include<bits/stdc++.h>
using namespace std;
string countAndSay(int A) {
    long int i=1;
    long int count=0;
    long int num=0;
    string prev="1";
    string curr="";
    for(i=2;i<=A;i++)
    {
        for(long int j=0;j<prev.size()-1;j++)
        {
            if(prev[j]==prev[j+1])
            {
                count++;
            }
            else
            {
                count++;
                curr.insert(curr.end(),(count-'0'));
                curr.insert(curr.end(),prev[j]);
                count =0;

            }
        }
        if(prev.size()>=2 && prev[prev.size()-1]==prev[prev.size()-2])
        {
            ++count;
            curr.insert(curr.end(),(count-'0'));
            curr.insert(curr.end(),prev[prev.size()-1]);
        }
        else
        {   //out<<curr<<" c\n";
            curr.insert(curr.end(),'1');
            curr.insert(curr.end(),prev[prev.size()-1]);
        }

        prev=curr;
        //cout<<prev<<"\n";
        curr.clear();
    }
    //cout<<prev;
    return prev;
}
int main()
{ int a;
cin>>a;
cout<<countAndSay(a);
return 0;
}
