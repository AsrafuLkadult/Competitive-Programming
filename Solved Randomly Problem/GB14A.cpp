#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
      cin>>t;
       while(t--){
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    long long sum=accumulate(v.begin(),v.end(),0);
     if(sum==x or (n==1 and x==v[0]))cout<<"NO"<<endl;
     else
     {
         sort(v.begin(),v.end());
          long long sum1=0,pos=0;
          cout<<"YES"<<endl;
         for(int i=0;i<n;i++)
         {
             sum1+=v[i];
             if(sum1!=x)cout<<v[i]<<" ";
             else
             {
                 pos=v[i];
                 continue;
             }


         }
         if(pos!=0){
         cout<<pos;
         }
         cout<<endl;


     }
       }





    return 0;
}
