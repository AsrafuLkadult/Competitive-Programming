#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
       cin>>t;
       while(t--){
     int n,m;
     cin>>n>>m;
     vector<int>v(n);
     for(auto &it:v)cin>>it;
     vector<int>ans;
     ans.push_back(n);
     for(int i=0;i<n;i++)
     {

         int k=v[i]%m;
         cout<<k<<endl;

     }
     cout<<ans.size()<<endl;
       }




    return 0;
}
