#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long a,b,c,d,ans;
    cin>>a>>b>>c>>d;
    ans=(a*d)-(b*c);
    if(ans==0)cout<<"0"<<endl;
    else if((ans!= 0 && (a*d)%(b*c)==0 ))cout<<"1"<<endl;
    else cout<<"2"<<endl;

    }




    return 0;
}
