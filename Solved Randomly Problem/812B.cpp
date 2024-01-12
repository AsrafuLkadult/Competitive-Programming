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
        vector<int>v(n);
        
        for(auto &it:v)cin>>it;
            vector<int>c(v.begin(), v.end());
         
         cout<<(v[0]== *min_element(v.begin(),v.end()) ?"YES":"NO")<<endl;


    }
      

      
	return 0;

    

}
