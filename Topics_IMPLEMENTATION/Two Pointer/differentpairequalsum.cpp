#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{ 
    
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    sort(v.begin(), v.end());
    vector<ll>prsum;

    for(ll i=0;i<n;i++)
    {
    	for(ll j=i+1;j<n;j++)
    	{
    		prsum.push_back(v[i]+v[j]);
    	}
    }
    //for(auto it:prsum)cout<<it<<" ";cout<<endl;
    ll ans = 0;
    for(auto it:prsum)
    {
    	 ll left = 0;
    	 ll right = n-1;
       ll mans = 0;
    	 while(left < right and right>-1 and left<n)
    	 {
           ll sum = v[left]+v[right];

           if(sum == it)
           {
           	left++;right--;
           	mans++;

           }
           else if(sum < it)
           {
           	left++;
           }
           else if(sum > it)
           {
           	right--;
           }

    	 }

    	 ans=max(ans,mans);

    }
    cout<<ans<<endl;
  }
        

        

    

   






    return 0;
}