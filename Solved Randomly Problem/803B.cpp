#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k,ans=0;
        cin>>n>>k;
        vector<int>v(n),p;
        p.push_back(0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(k!=1){
        for(int i=1;i<n-1;i++)
        {
            if(v[i]>(v[i-1]+v[i+1]))ans++;

        }
        cout<<ans<<endl;}
        else cout<<(n-1)/2<<endl;





    }




    return 0;
}
