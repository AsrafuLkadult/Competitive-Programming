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
         vector<int>v;

         map<int,int>mp;
           for(int i=0;i<n;i++)
           {    int x;
                cin>>x;
                v.push_back(x);
                mp[x]++;

           }
           int minn=9999999;
           bool f=0;
           for(auto it:mp)
           {
                if(it.second==1)
                {

                     minn=min(minn,it.first);
                     f=1;

                }
           }
           if(f==1)

           {   auto it1=find(v.begin(),v.end(),minn);
                cout<<distance(v.begin(),it1)+1<<endl;
           }
           else cout<<"-1"<<endl;

    }




    return 0;
}
