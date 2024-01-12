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
        int n,l,r;
        cin>>n>>l>>r;

        vector<int>ans;
        bool f=1;
        for(int i=1;i<=n;i++)
        {
            int x =((l-1)/i  +1)*i;
            ans.push_back(x);
            f = f & (x<=r);

        }
        //sort(ans.begin(),ans.end());
        if(f){
              cout<<"YES"<<endl;
             for(auto it:ans)cout<<it<<" ";cout<<"\n";
             }
         else 
         {
            cout<<"NO"<<endl;
         }
       




    }
	
    	return 0;

    

}
