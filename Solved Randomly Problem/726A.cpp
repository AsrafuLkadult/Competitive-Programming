#include<bits/stdc++.h>
using namespace std;
int main()

{

  int t;
  cin>>t;
   while(t--){
  int n,sum=0;
   cin>>n;
    for(int i=0;i<n;i++)
    {
       int x;
        cin>>x;
        sum+=x;

    }
    if(sum==0)cout<<"1"<<endl;
    else if(sum<0)cout<<"1"<<endl;
    else cout<<abs(sum-n)<<endl;
   }

    return 0;
}
