#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k,ans=0;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=k;i++)
    {
        if(arr[i]>k)ans++;
    }
    cout<<ans<<endl;
    }
    return 0;
}
