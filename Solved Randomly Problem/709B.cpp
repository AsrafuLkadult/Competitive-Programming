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
        int ans=v[1]-v[0];
        if(n==1)cout<<"-1"<<endl;
        else if(n==2 and v[0]==1 and v[1]==1)cout<<"0"<<endl;
        else if(ans<=0)cout<<"-1"<<endl;
        else cout<<2*max(v[1],v[0])<<" "<<abs(v[0]-v[1])<<endl;




    }



    return 0;
}
