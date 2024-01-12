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

int main()
{
   FAST_IO();

   int t;
   cin>>t;
   while(t--)
		   {
		       ll n;
		       cin>>n;
		       vector<ll> a,b;
		       ll zero = 0,one = 0,negone=0;
             map <ll,vector<ll> > mp;
		       for(ll i=0;i<n;i++)
		       {
		       		ll x;
		       		cin>>x;		       		
		       		a.push_back(x);
		       }
		       ll element = 0;
		        for(ll i=0;i<n;i++)
		        {
		        	   ll bx;
		        	   cin>>bx;
		        	   if(a[i] == bx){element++;}
		        	   if(a[i] != bx and bx>0)
		        	   {
		        	   	if(a[i] == 0)
		        	   	{
		        	   		if(one)
		        	   		{
		        	   			element++;
		        	   		}
		        	   		else
	        	   			{
	        	   				element--;
	        	   			}
		        	   	}
		        	   	if(a[i] == 1)
		        	   	{
		        	   		if(one)
		        	   		{
		        	   			element++;
		        	   		}
		        	   		else
	        	   			{
	        	   				element--;
	        	   			}
		        	   	}
		        	   	if(a[i] == -1)
		        	   	{
		        	   		if(one)
		        	   		{
		        	   			element++;
		        	   		}
		        	   		else
	        	   			{
	        	   				element--;
	        	   			}
		        	   	}
		        	   }
		        	   if(a[i] != bx and bx<0)
		        	   {
		        	   	if(a[i] == 0)
		        	   	{
		        	   		if(negone)
		        	   		{
		        	   			element++;
		        	   		}
		        	   		else
	        	   			{
	        	   				element--;
	        	   			}
		        	   	}
		        	   	if(a[i] == 1)
		        	   	{
		        	   		if(negone)
		        	   		{
		        	   			element++;
		        	   		}
		        	   		else
	        	   			{
	        	   				element--;
	        	   			}
		        	   	}
		        	   	if(a[i] == -1)
		        	   	{
		        	   		if(negone)
		        	   		{
		        	   			element++;
		        	   		}
		        	   		else
	        	   			{
	        	   				element--;
	        	   			}
		        	   	}
		        	   }
		        	   if(a[i] != bx and bx==0)
		        	   {
		        	   	
		        	   	if(a[i] == 1)
		        	   	{
		        	   		if(negone)
		        	   		{
		        	   			element++;
		        	   		}
		        	   		else
	        	   			{
	        	   				element--;
	        	   			}
		        	   	}
		        	   	if(a[i] == -1)
		        	   	{
		        	   		if(one)
		        	   		{
		        	   			element++;
		        	   		}
		        	   		else
	        	   			{
	        	   				element--;
	        	   			}
		        	   	}
		        	   }


		        	   if(a[i]==0)zero++;
		        	   if(a[i]==1)one++;
		        	   if(a[i]==-1)negone++;

		        }

		        if(element == n)cout<<"YES"<<endl;
		        else cout<<"NO"<<endl;



		
	}

   return 0;
}
