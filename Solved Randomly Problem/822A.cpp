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

        vector<int>v,diff;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
           v.push_back(x);
        }
        sort(v.begin(), v.end());

         for(int i=0;i<n-1;i++)
        {
            diff.push_back(v[i+1]-v[i]);
        }
         int ans = 1e9;
        for(int i=0;i<diff.size()-1;i++)
        {
          ans=min(ans,diff[i]+diff[i+1]);

        }
        cout<<ans<<endl;
         
       



     }
        
   
  


    return 0;
}
