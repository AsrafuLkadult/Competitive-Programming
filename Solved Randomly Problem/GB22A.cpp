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
	//int_code(); 
	 
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	int n;
	 	cin>>n;
	 	vector<int>a(n),b(n),v,one;

	 	for(int i=0;i<n;i++)
	 	{
	 		cin>>a[i];
	 	}
	 	for(int i=0;i<n;i++)
	 	{
	 		cin>>b[i];
	 	}
	 	for(int i=0;i<n;i++)
	 	{
	 		if(a[i]==0)v.push_back(b[i]);
	 		else one.push_back(b[i]);
	 	}

	 	sort(one.begin(),one.end());
	 	sort(v.begin(),v.end());
	 	reverse(v.begin(),v.end());
	 	reverse(one.begin(),one.end());
	 	int range = min(v.size(),one.size());
	 	if(range ==0){cout<<accumulate(b.begin(),b.end(),0LL)<<endl;}
	 	else {
	 		    long long sum =0;
	 		   for(int i=0;i<range;i++)
	 		   {
	 		   	sum+=((long long)(one[i]+v[i])*2);
	 		   }
	 		    for(int i=range;i<v.size();i++)
	 		   {
	 		   	sum+=(long long)(v[i]);
	 		   }
	 		   for(int i=range;i<one.size();i++)
	 		   {
	 		   	sum+=(long long)(one[i]);
	 		   }

	 		   if((n-range)==range)
	 		   {
	 		   	sum-=(long long)(*min_element(b.begin(),b.end()));
	 		   }

	 		   cout<<sum<<endl;

	 	}
       
     }
	 
	return 0;
}
