#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>n>>k;
   vector<int>v(n),d,cg;
   cg.push_back(0);
   for(auto &it:v)cin>>it;
   sort(v.begin(),v.end());
   for(int i=0;i<k;i++)
     {
          int a,b;
          cin>>a>>b;
          if(find(cg.begin(),cg.end(),b)==cg.end()){
          d.push_back(v[b-1]);
          cg.push_back(b);
          }
          else
          {
               v[a]=1-v[a];
               sort(v.begin(),v.end());
          }
     }
     for(auto e:d)cout<<e<<endl;





    return 0;
}
