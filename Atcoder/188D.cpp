#include<bits/stdc++.h>
using namespace std;
int main()

{

   int n;
   cin>>n;
     vector<int>v(n),d(n);
     for(auto &it:v)cin>>it;
     for(auto &it1:d)cin>>it1;
     long long sum=0;
     for(int i=0;i<n;i++)
     {

         sum+=(v[i]*d[i]);

     }
     if(sum==0)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;




    return 0;
}

