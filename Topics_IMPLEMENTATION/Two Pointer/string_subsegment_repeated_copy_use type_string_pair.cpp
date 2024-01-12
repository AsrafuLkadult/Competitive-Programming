#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* this problem for main idea use two pointer technique 

 ekta string er upor deya 2 ta kore character er frequency check korci jodi kunotar frequency
 1 er beshi hoy tar mane seta copy kora jabe continues subsegment hisabe 
 and pair character same hole check korci je etar kuno ta ki previous count er maje ache ki na
 ejonno ami arekta map neya kaj korci
 jeitate each pair position set kore rakhci
 */
int main()
{
	 
	       int t;
	       cin>>t;
	       while(t--){

	       	            
	       	             ll n;
	       	             cin>>n;
	       	             string s;
	       	             cin>>s;
	       	             if(n<=3)cout<<"NO"<<endl;
	       	             else 
	       	             {
	       	             map<string,ll>mp;
	       	             map<string,pair<ll,ll> >pos;
	       	             ll i=0,j=1;
	       	             ll p1,p2;
	       	             while( i<j and i<n and j<n)
	       	             {
                        	string str ="";
	       	             		str+=s[i];
	       	             		str+=s[j]; 
	       	             	
	       	             	if(pos[str].second >=1)
	       	             	{
	       	             		
	       	             		if(pos[str].second != i)
	       	             		{
	       	             		  mp[str]++;
	       	             		  pos[str].first=i;
	       	             		  pos[str].second=j;
	       	             		  i++;
	       	             		  j++;
       	             		  
	       	             	  }
	       	             	  else 
	       	             	  {
	       	             	  	i++;
	       	             		  j++;
	       	             	  }
	             		
	       	             	}
	       	             	else 
	       	             	{
	       	             		
	       	             		mp[str]++;
       	             		  pos[str].first=i;
       	             		  pos[str].second=j;
	       	             		i++;j++;
	       	             		
	       	             	}
	       	             


					              }
					                bool ok=false;

					              for(auto it:mp)
					              {
					              	if(it.second>1)ok=1;
					              }
					              if(ok)cout<<"YES"<<endl;
					              else cout<<"NO"<<endl;
					            
					            }
	       	          

                 }
   

	return 0;
}
