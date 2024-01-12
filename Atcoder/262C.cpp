#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &it:v)cin>>it;
   long long ans=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(min(v[i],v[j])==(i+1) && max(v[i],v[j])==(j+1) and  i!=j)ans++;
       }
   }
   cout<<ans<<endl;

    return 0;
}
