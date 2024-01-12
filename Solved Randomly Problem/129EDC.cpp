#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
      while(t--){
     int a,b,c,m;
     cin>>a>>b>>c>>m;
     a--;b--;c--;
     int sum=a+b+c;

     if(sum<m)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
      }



    return 0;
}
