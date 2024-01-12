#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
       cin>>t;
        while(t--){
    int n;
     cin>>n;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
      int sum=accumulate(v.begin(),v.end(),0);
       cout<<sum<<endl;
        }

    return 0;
}
