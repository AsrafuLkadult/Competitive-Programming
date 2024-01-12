#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int>v(n);
       for(auto &it:v)cin>>it;
       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
       for(auto it:v)cout<<it<<" ";
       cout<<endl;
   }

    return 0;
}
