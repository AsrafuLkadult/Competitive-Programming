#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

    long long n,m,t;
    cin>>n>>m>>t;
    vector<ll>v;
    pair<ll,ll>p[m];
    for(ll i=0;i<n-1;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);

    }

    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        p[i]={x,y};
    }

       bool f=0;
      for(ll i=0;i<v.size();i++)
    {
        if(v[i] <= t){

            t-=v[i];
            for(auto it:p)
            {
               // cout<<it.first<<" "<<i+1<<endl;
                if(it.first == (i+2))
                {
                    t+=(it.second);
                    break;
                }
                else {break;}
            }

            //cout<<t<<endl;


        }
        else
        {
            f=1;break;
        }
    }

    if(f)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}

