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
       
       int n,x,fst;
       cin>>n>>x;
       std::vector<int> v(n-1);
       cin>>fst;
       int first = fst;
       int ans = 0;
       for (int i = 0; i < n-1; ++i)
       {
           int p;
           cin>>p;
           int result = abs(first-p);

           //cout<<result<<" "<<(result/2)+(result%2)<<endl;
           int lol = (result/2);

           if((lol == x and result%2) || lol>=x )ans++;
           first = p;

       }
       cout<<ans<<endl;
       



    }
      

      
	return 0;

    

}
