#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
   cin>>t;
    while(t--){
               int n; cin>>n;
           vector<int>v(n);
           for(auto &it:v)cin>>it;
            sort(v.begin(),v.end());
            int f=*max_element(v.begin(),v.end());
            for(int i=0;i<n;i++)cout<<f<<" ";cout<<endl;




    }


    return 0;
}
