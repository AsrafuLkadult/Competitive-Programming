#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//for fast input output like c print and scanf 
void FAST_IO()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

//vector display 

void show(std::vector<ll>&v)
{
	for(ll i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

// for positive and negative value assign in this array.
ll maximum_sub_array_sum(vector<ll>&v)
{
			ll best = 0, sum = 0;
			for (ll k = 0; k < v.size(); k++)
			 {
					sum = max(v[k],sum+v[k]);
					best = max(best,sum);
			
        }

       return best;
}
int main()
{
   FAST_IO();

   int t;
   cin>>t;
   while(t--)
		   {
		   	ll n;
		   	cin>>n;
		   	vector<ll>v;
		   	for(ll i=0;i<n;i++)
		   	{

		   		ll p;
		   		cin>>p;
		   		v.push_back(p);
		   		
		     
		    }
		    ll ans = maximum_sub_array_sum(v);
		    cout<<ans<<endl;
		      
	
		   	}

   return 0;
}