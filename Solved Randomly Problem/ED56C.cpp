#include<bits/stdc++.h>
using namespace std;
int main()
{

    int  n;
    cin>>n;
    stack<long long>last;
    queue<long long>first;
    long long k;
     cin>>k;
     last.push(k);
     first.push(0);
     n--;
     for(long long i=0;i<n/2;i++)
     {
        long long x;
         cin>>x;
         long long diff;
           diff=abs(x-last.top());
           if(first.front()<=diff)
           {
               last.push(x-diff);
               first.push(diff);
           }
           else
           {

               first.push(first.front()+1);
               last.push(x-(diff+first.front()+1));
           }
    }
    while(!first.empty())
        {

            cout<<first.front()<<" ";
            first.pop();
        }
     while(!last.empty())
        {

            cout<<last.top()<<" ";
            last.pop();
        }
    cout<<endl;




    return 0;
}
