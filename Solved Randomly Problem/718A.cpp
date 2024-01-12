#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
     cin>>t;
      while(t--){
     vector<long long>v;
    for(long long i=0;i<15;i++){v.push_back(205*pow(10,i));}
    //for(auto it:v)cout<<it<<" ";
   long long n,ans=0;
    cin>>n;
    if(n%2050!=0){cout<<"-1"<<endl;}
    else
    {


    while(1){
    auto f=lower_bound(v.begin(),v.end(),n);
    if(*f == n){break;}
    else if(*f <n){
       n-=(*f);}
       else {
           n-=(*(f-1));
       }
           ans++;
    }

  cout<<ans+1<<endl;
    }
      }
   return 0;
}

