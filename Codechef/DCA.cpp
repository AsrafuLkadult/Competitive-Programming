#include<bits/stdc++.h>
using namespace std;
int main()

{

       int t;
       cin>>t;
       while(t--){
       string s;
       int n;
        cin>>n>>s;
        int f=count(s.begin(),s.end(),'0');
        int d=120-f;
        double sd=d/120.0;
        double ans=sd*100;
        if((int)ans>=75)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }


    return 0;
}

