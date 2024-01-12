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

      int a,b;
      cin>>a>>b;

      if(a==0 or b==0 or (a+b <3))cout<<"0"<<endl;
      else 
      {

        int mn = min(a,b);   //though each category equal price so any tool create 
        int mx = max(a,b);
        
        int ans  = min(mn,mx/2);
        int ans1 = mn/2;
        int f = mx - (mn/2);
        

        if((mx%2 ) and abs(mn-(mx/2)))
        {
               int mnn = min(mx%2,mn-(mx/2));   
               int mxx = max(mx%2,mn-(mx/2));  
              ans+=(min(mnn,mxx/2));
        }

        if (f and (mn%2))
        {
            int mnnn = min(mn/2,f);
            int mxxx = max(mn/2,f);
            ans1+=min(mnnn,mxxx/2);
        }





    
      cout<<max(ans,ans1)<<endl;

    }
}
  


    return 0;
}
