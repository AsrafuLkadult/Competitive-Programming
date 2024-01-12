#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n,k;
   cin>>n>>k;
   stack<int>v;
   for(int i=0;i<n*k;i++)
   {
         int x;
          cin>>x;
          v.push(x);

   }
   int med=(n+1)/2;
    int ans=0;
  while(!v.empty())
  {
        ans++;
       if(ans%med==0)
         {
             cout<<v.top()<<endl;
             v.pop();
            // v.pop_front();
         }
         v.pop();


  }
    return 0;
}

