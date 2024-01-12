#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin>>n;
  vector<int>v1(n),v2(n);set<int>s;
  for(auto &it:v1)cin>>it;
  for(auto &it:v2)cin>>it;

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          s.insert(v2[i]-v1[j]);
      }

  }

  for(auto it:s)cout<<it<<" ";




    return 0;
}
