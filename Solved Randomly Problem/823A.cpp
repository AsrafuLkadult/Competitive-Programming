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
        int n,c;
        cin>>n>>c;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        long long sum=0;

        for(auto it:mp)
        {
            sum+=(min(it.second,c));
        }
        cout<<sum<<endl;
        

     
    }
      

      
	return 0;

    

}
