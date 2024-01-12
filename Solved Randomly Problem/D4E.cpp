#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
    cin>>n;
     vector<int>v(n);
     for(auto &it:v)cin>>it;
     sort(v.begin(),v.end());
      long long minn=max(v[n/2],v[n/2-1]);
       long long sum=0;
      for(long long i=0;i<n;i++)
          sum+=(abs(minn-v[i]));
      cout<<sum<<endl;


    return 0;
}
