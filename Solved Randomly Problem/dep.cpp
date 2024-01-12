#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      ll n,one=0,zero=0;
      cin>>n;
      set<ll>s;
      ll ok=0;
      for(ll i=0;i<n;i++)
      {
          ll x;
          cin>>x;
          if(x==-1)
          {
              if(s.find(i-1)!=s.end())
              {
                  ok=1;
              }
              else s.insert(i);
              zero++;
          }
      }
      one = n-zero;
      if(ok==1)
      {
          cout<<one+2-(zero-2)<<endl;
      }
      else if(zero ==0 and one==2)cout<<"-2"<<endl;
      else if(zero ==0 and one>2)cout<<one-2<<endl;
      else cout<<one-zero<<endl;



   }

   return 0;
}

