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
        vector<int>v,initial;
        bool f=0;int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            initial.push_back(x);
            sum+=x;
            v.push_back(sum);
        }
       // for(auto it:v)cout<<it<<" ";cout<<endl;

        for(int i=0;i<n-1;i++)
        {
            int ans = v[i]-initial[i+1];
            
            if(ans > 0)
            {
                if(ans != v[i+1]){f=1;break;}
            }
            //cout<<v[i]<<" "<<initial[i+1]<<" "<<ans<<" "<<v[i+1]<<endl;


        }
         if(f==1)cout<<"-1"<<endl;
        else 
        {
            for(auto it:v)cout<<it<<" ";cout<<endl;
        }
        
       

        
      
     }
     
    return 0;
}