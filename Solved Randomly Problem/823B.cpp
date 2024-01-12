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
		string s;
		cin>>s;
		vector<int>v,boro,choto;
		for(int i=0;i<s.size();i++)
		{
			v.push_back(s[i]-'0');

		}

		for(int i=0;i<v.size()-1;i++)
		{
			int mn = *min_element(v.begin()+i+1,v.end());
			//cout<<v[i]<<" "<<mn<<endl;

			if(v[i]>mn)
				boro.push_back(min(v[i]+1,9));
			else choto.push_back(v[i]);

		}
		if(v[v.size()-2] > v[v.size()-1])choto.push_back(v[v.size()-1]);
		else boro.push_back(min(v[v.size()-1],9));
		sort(boro.begin(),boro.end());
		for(auto it:choto)cout<<it;
		for(auto it:boro)cout<<it;cout<<endl;

     
    }
      

      
	return 0;

    

}
