#include<bits/stdc++.h>
using namespace std;
int countBits(int number)
{
    return (int)log2(number)+1;
}

int main()
{
       int t;
       cin>>t;
        while(t--){

        int l,r,les=0,get=0,x;
        cin>>l>>r;
        map<int, int>v;
        vector<int>ans;
        for(int i=l;i<=r;i++)
        {

            x=countBits(i);

            v[x]++;



        }
        for (auto g : v)
         ans.push_back(g.second);
         sort(ans.begin(),ans.end());
          if(l==1 and (r-l)%4==0)
         cout<<(r-l+1)-ans[ans.size()-1]-1<<endl;
         else cout<<(r-l+1)-ans[ans.size()-1]<<endl;


        }












return 0;
}

