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
   
   int n,d;
   cin>>n>>d;
   vector<int>v(n);
   for(auto &it:v)cin>>it;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    long long size =0;
    int team=0;
    for(int i=0;i<n;i++)
    {
        
        int ans = d/v[i];ans++;
        size+=ans;
        if(size <= n){team++;}


    }
    cout<<team<<endl;


  
            
    return 0;


}
