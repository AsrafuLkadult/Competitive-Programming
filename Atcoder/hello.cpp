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
typedef long long ll;

int main()
{
    int_code();
    int t;
    cin>>t;
    
    while(t--)
    { 
      
      ll n;
      cin>>n;
      ll ans=0;
      map<ll,ll>mp;
      for(ll i=0;i<n;i++)
      {
        ll x;
        cin>>x;
        if(x%3==0)ans++;
        else mp[x%3]++;
      }
      ll twodigit = min(mp[1],mp[2]);
      ans+=twodigit;
      mp[1]-=twodigit;
      mp[2]-=twodigit;
      ans+=(mp[1]/3);
      ans+=(mp[2]/3);
      cout<<ans<<endl;
    }


    return 0;
          
}

