#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
      while(t--){
    int n,m;
     cin>>n>>m;
     vector<int>jack(n),john(m);
     long long jack_sum=0,john_sum=0;

     for(auto &it:jack){cin>>it;jack_sum+=it;}
     for(auto &it1:john){cin>>it1;john_sum+=it1;}
      sort(jack.begin(),jack.end());
     sort(john.begin(),john.end());
     int f=min(n,m);
     if(jack_sum > john_sum)cout<<"0"<<endl;
     else
     {


        long long ans=0;

      for(int i=0;i<f;i++)
      {

         if(john[m-i-1] < jack[i] or (jack_sum > john_sum)){
              break;}
         else
         {
             jack_sum-=jack[i];
             jack_sum+=john[m-i-1];
             john_sum-=john[m-i-1];
             john_sum+=jack[i];
             ans++;

         }
      }
         if(jack_sum > john_sum)cout<<ans<<endl;
        else cout<<"-1"<<endl;
      }
      }

    return 0;
}
