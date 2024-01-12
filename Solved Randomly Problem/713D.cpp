#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
     while(t--){
  int n;
   cin>>n;
   vector<int>v(n+2),ans;
   for(auto &it:v)cin>>it;
   sort(v.begin(),v.end());
  if(accumulate(v.begin(),v.begin()+n,0)== v[v.size()-1] || accumulate(v.begin(),v.begin()+n,0)== v[v.size()-2] )
  {
      for(int i=0;i<n;i++)
       cout<<v[i]<<" ";
       cout<<endl;

  }
  else cout<<"-1"<<endl;
}





    return 0;
}

