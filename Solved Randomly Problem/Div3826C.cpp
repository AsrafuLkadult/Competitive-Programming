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
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &it:v)cin>>it;
             int sum=0,final_sum=accumulate(v.begin(), v.end(),0),seg_len=INT_MAX;
         //cout<<final_sum<<endl;
            for(int i=0;i<n;i++)
            {
                sum+=v[i];int seg_sum=0,sum_check=0,len=1,f=0;
                
                for(int j=0;j<n;j++)
                {
                   seg_sum+=v[j];
                   if(seg_sum==sum){sum_check+=seg_sum;seg_sum=0;f=max(len,f);len=0;}
                   if(sum_check==final_sum){seg_len=min(seg_len,f);}
                   if(seg_sum!=sum)len++;
                  
                }
            } 
            cout<<seg_len<<endl;   
       
         
           
     }

    
    
    
    
   return 0;
}