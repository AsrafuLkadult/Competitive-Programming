#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &it:v)cin>>it;
   auto it=find(v.begin(),v.end(),*min_element(v.begin(),v.end()));
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)cout<<"?"<<" "<<v[i]<<flush;
   cout<<"!"<<" "<<distance(v.begin(),it)+1<<flush;





    return 0;
}

