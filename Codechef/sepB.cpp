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

     long long n,q;
     cin>>n>>q;
     vector<long long>v(n);
     for(auto &it:v)cin>>it;
         vector<long long>ans;
           for(long long i=0;i<v.size()-1;i++)
           {
             ans.push_back(v[i]-v[i+1]);
           }

        while(q--)
        {
           long long index,value;
           cin>>index>>value;  

           if(index != v.size()){
           long long les=ans[index-2];
           long fes = ans[index];
           ans[index-2] = v[index-2] -value; 
           ans[index-1] = value - v[index];
           cout<<*max_element(ans.begin(), ans.end())<<endl;
           ans[index-2] = les; 
           ans[index-1] = fes;
              }
              else 
              {
            long long les=ans[index-2];
           ans[index-2] = v[index-2] -value; 
           cout<<*max_element(ans.begin(), ans.end())<<endl;
           ans[index-2] = les; 
              }


             
        }
    }
      

      
    return 0;

    

}
