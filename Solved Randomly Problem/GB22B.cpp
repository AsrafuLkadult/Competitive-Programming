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
int main()
{
	int_code(); 
	 
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	int n,k;
	 	cin>>n>>k;
	 	vector<int>v(k),nw,ans;
	 	for(int i=0;i<k;i++)cin>>v[i];
        //ans.push_back(v[0]);
	 	reverse(v.begin(), v.end());
	 	for(int i=0;i<k-1;i++)
	 	{
	 		nw.push_back(v[i]-v[i+1]);
	 	}
	 	
	    reverse(v.begin(), v.end());
	 	//vector<int>s(n-k,0);
	 	//for(int i=0;i<s.size();i++)ans.push_back(s[i]);
	 	reverse(nw.begin(),nw.end());
	 	for(int i=0;i<nw.size();i++)ans.push_back(nw[i]);

	 		if(k==1)cout<<"YES"<<endl;
	 	    else 
	 	    	{
	 	    		if(!is_sorted(ans.begin(),ans.end()))cout<<"NO"<<endl;
	 	    		else 
	 	    		{
	 	    			if((long long)nw[0]*(n-k+1) >= v[0] )cout<<"YES"<<endl;
	 	    			else cout<<"NO"<<endl;
	 	    		}

	 	       }		
	 	
	     	
     }
	 
	return 0;
}
