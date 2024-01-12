#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{ 

    int t;
    cin>>t;
    while(t--)
    {

      ll k,n;
      cin>>k>>n;
      vector<ll>v;
      v.push_back(1);
      v.push_back(2);
      k-=2;
      ll dif = 2;

      for(ll i=1;i<=n and k>0;i++)
      {
      	ll ans = dif+v.back();

      	if((n-ans)>= (k-1))
      	{
      		v.push_back(ans);
      		dif++;
      		k--;
      	}
      	else 
      	{
      		ll val  = v.back();
      		 for(ll i=val+1;i<=n and k>0;i++)
      		 {
      		 	v.push_back(i);
      		 	k--;
      		 }
      	}



      }
      for(auto it:v)cout<<it<<" ";cout<<endl;




        

    }

   






    return 0;
}