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
 // int v[n+1];
  map<int,int>mp;
  set<int>bad;   //for store bad elements
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
      if(mp.find(v[i])==mp.end())
      mp[v[i]]=i;
  }
//for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
   int index;
  for(index=n-1;index>=0;index--)
  {
      if(v[index]<v[index-1])break;
      if((v[index]!=v[index-1]) and (mp[v[index]]!=index))break;
  }

  for(index--;index>=0;index--)    //initial index present current value so index decrease 1
    bad.insert(v[index]);

  cout<<bad.size()<<endl;
  }

    return 0;
}


