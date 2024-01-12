#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<long long>v;
    for(long long i=0;i<36;i++)
    {
        long long x = (pow(3,i));
        v.push_back(x);
    }
    int t;
    cin>>t;
     while(t--)
     {
        long long n,sum=0,k;

        cin>>n>>k;
        for(long long i=0;i<k;i++)
            sum+=v[i];
        if(sum==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


     }




    return 0;
}

