#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
    while(t--)
    {
        int n;
         cin>>n;
         vector<int>v(n);
         for(auto &it:v)cin>>it;
         //int f=*min_element(v.begin(),v.end());
         cout<<count(v.begin(),v.end(),v[0])<<endl;




    }





    return 0;
}
