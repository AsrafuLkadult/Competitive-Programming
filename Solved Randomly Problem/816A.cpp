#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int maxx = max(n,m);
int minn =min(n,m);
if (n==m && n==1)cout<<"0"<<endl;
else if(minn%2==0 && ( maxx !=1) )
cout<<2*((minn+1)/2)+(2*((minn-1)/2))+maxx<<endl;
else
    cout<<2*((minn)/2)+(2*((minn)/2))+maxx<<endl;
}

    return 0;
}
