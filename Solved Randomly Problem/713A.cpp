#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
   while(t--){
 int n,x;
  cin>>n;
  vector<int>v(n);
     map<int,int>mp;
  for(int i=0;i<n;i++)
  {
       cin>>x;
       mp[x]++;
       v.push_back(x);

  }
  int ans;
  for(auto it:mp)
  {
      if(it.second ==1){ans=it.first;break;}
  }

  auto an=find(v.begin(),v.end(),ans);
   cout<<n-distance(v.begin(),an)+1<<endl;
   }






    return 0;
}
