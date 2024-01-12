#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
     cin>>t;
     while(t--){
   int n,m;
   vector<int>alice,bob;
   cin>>n;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    alice.push_back(x);

   }
   cin>>m;
   for(int i=0;i<m;i++){
    int x;
    cin>>x;
    bob.push_back(x);
   }

//   cout<<max({alice[0],*max_element(bob.begin(),bob.end()),alice[n-1]})<<endl;
    //cout<<max(alice[0],alice[n-1])<<endl;
    int sum=accumulate(bob.begin(),bob.end(),0);
    if(sum%2==0)cout<<alice[0]<<endl;
    else cout<<alice[n-1]<<endl;


     }




    return 0;
}
