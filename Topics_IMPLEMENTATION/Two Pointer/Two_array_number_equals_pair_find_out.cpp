#include <bits/stdc++.h>
using namespace std;
void int_code()
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif

}
#define ll long long 


int main()
{    
    int_code();

    
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n),b(m);
        map<ll,ll>mp; //one array unique create then their frequency multifly is total pair
        for(ll i=0;i<n;i++){ll x;cin>>x;mp[x]++;}
       // for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
        for(auto &it:b)cin>>it;
        //for two pointer use first sorted then apply     
        sort(b.begin(), b.end());
        
        // i indicate map and j indicate b array and ans is count to exist goal pair.
        // freq=0 use same element pair count and get similar pair it.second for total
        ll j=0,ans=0;
        auto it=mp.begin();


       while(it !=mp.end() && j <b.size())   //if one array all element traverse so any array size loop continue
        {   
            //cout<<it->first<<" "<<it->second<<endl;
            //cout<<it->first<<" "<<b[j]<<endl;
            if(it->first == b[j]){ ans+=(it->second);j++;}  // each pair time add frequency
            if(it->first < b[j] ){it++;} 
            if(it->first > b[j]){j++;}                      

        }    
        
       cout<<ans<<endl;

    
   return 0;
    
}

////here use another important idea for find this pair....very interesting.

/*#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
int n,m;
scanf("%d%d",&n,&m);
map<int,int>mp;
 vector<int> v(n),r(m);
 for(auto &u:v)cin>>u,mp[u]++;
 long long ans=0;
 for(auto &u:r)cin>>u,ans+=mp[u];
 cout<<ans<<endl;
    
}*/