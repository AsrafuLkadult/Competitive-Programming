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
        int a,b;
        cin>>a>>b;
        if(min(a,b)==1)cout<<a<<" "<<b<<endl;
        else cout<<a-1<<" "<<b-1<<endl;
      
     }
	 
	return 0;
}
