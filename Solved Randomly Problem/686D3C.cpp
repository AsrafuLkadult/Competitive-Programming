#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         vector<int>v;
         map<int,int>mp;
         set<int>s;
           for(int i=0;i<n;i++)
           {    int x;
                cin>>x;
                v.push_back(x);
                mp[x]++;
                s.insert(x);

           }
           if(s.size()==1)cout<<"0"<<endl;
           else
           {
           int minn=0,maxi=0;
           for(auto it:mp)
           {
                if(it.second>maxi)
                {
                     maxi=max(maxi,it.second);

                }
           }
           vector<int>ele;
            for(auto it:mp)
           {
               if(it.second==maxi)ele.push_back(it.first);
           }
           vector<int>gh;
           for(int j=0;j<ele.size();j++)
           {
               vector<int>ans;
                int pos=-1;
                int cnt=0;
              for(int k=1;k<n;k++)
              {
                  if(v[k-1]!=v[k]and abs(pos-1)>1){cnt++;pos=k-1;}
              }
              gh.push_back(cnt);


           }
           sort(gh.begin(),gh.end());
           cout<<gh[0]<<endl;
           }


    }

           return 0;}
