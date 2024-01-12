#include<bits/stdc++.h>
using namespace std;
int main()

{

     int t;
     cin>>t;
     while(t--){
     int n;
     cin>>n;
     vector<double>v;
     for(int i=0;i<n;i++)
     {
         double x;
         cin>>x;
         v.push_back(x);
     }
    int sum=accumulate(v.begin(),v.end(),0);
     double ans=(sum/double(n));
     //cout<<sum<<ans<<endl;
    if(find(v.begin(),v.end(),ans) !=v.end())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


     }




    return 0;
}
