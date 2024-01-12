#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    vector<long long>prefix_sum,sorted_prefix_sum;
    long long sum =0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+= (long long)v[i];
        prefix_sum.push_back(sum);
    }
   // for(auto i:prefix_sum)cout<<i<<" ";
   sort(v.begin(),v.end());
   sum=0;
   for(int i=0;i<n;i++)
    {
        sum+=(long long)v[i];
        sorted_prefix_sum.push_back(sum);
    }
    //for(auto i:sorted_prefix_sum)cout<<i<<" ";
    int queries;
    cin>>queries;
    while(queries--)
    {
        int type,low,up;
        cin>>type>>low>>up;
        low--;up--;
        if(type==1)
            {
                if(low==0 or up==0)cout<<prefix_sum[max(low,up)]<<endl;
                else cout<<prefix_sum[up]-prefix_sum[low-1]<<endl;
            }
        else
            {
                if(low==0 or up==0)cout<<sorted_prefix_sum[max(low,up)]<<endl;
                else cout<<sorted_prefix_sum[up]-sorted_prefix_sum[low-1]<<endl;
            }

    }



    return 0;
}
