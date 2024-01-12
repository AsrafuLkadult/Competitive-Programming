#include<bits/stdc++.h>
using namespace std;
int main()

{

       int t;
       cin>>t;
       while(t--){
     int x,y,k,n,ff,dd,ans;
      cin>>x>>y>>k>>n;
     // int f=(x+y);
      ans=(x+y)/2;
       ff=abs(ans-x);
      dd=abs(ans-y);

         if(ff==dd && ff%k==0 )cout<<"Yes"<<endl;
         else cout<<"No"<<endl;

       }

    return 0;
}

