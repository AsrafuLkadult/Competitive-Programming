#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long n,k;
    cin>>n>>k;
    map<long long,long long>mp;
    long long ans1,ans2;
    bool f=1;

    for(long long i=2;i<=n;i+=2)
    {
         ans1 = (i+k)*(i-1);
         ans2 = ((i-1)+k)*i;
        if(i%4==0 or (i-1)%2==0){
            if(i%4==0){mp.insert({i-1,i});}
            else
            {
                mp.insert({i,i-1});
            }

             }

         else if(ans1%4==0){mp.insert({i,i-1});}
         else if(ans2%4==0){mp.insert({i-1,i});}
         else {f = 0;}

    }

    if(f == 0 )cout<<"NO"<<endl;

    else
    {
        cout<<"YES"<<endl;
        for(auto it:mp)
            cout<<it.first<<" "<<it.second<<endl;
    }

    }

    return 0;
}
