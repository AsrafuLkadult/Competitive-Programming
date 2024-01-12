#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
    cin>>n;
     vector<int>v(n);
     map<int,int>mp;
     for(auto &it:v){cin>>it;mp[it]++;}
      int maxi=1,ele=0;
      for(auto it1:mp)
      {
          if(it1.second>=maxi){maxi=it1.second;ele=max(ele,it1.first);}
      }
     sort(v.begin(),v.end());
      long long sum1=0;
      for(auto f:v){sum1+=abs(ele-v[f]);}
      int minn=max(v[n/2],v[n/2-1]);
       long long sum=0;
      for(int i=0;i<n;i++)
          sum+=(abs(minn-v[i]));
      cout<<min(sum,sum1)<<endl;
    return 0;
}
