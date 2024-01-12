#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
     while(t--){
    int n,x,zero=0,dec=0,inc=0;
    cin>>n;
    vector<int>v,zerov,incv,decv;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=v[0];i<n+v[0];i++)
    {

        zerov.push_back(i);
    }
    for(int i=v[0]+1;i<n+v[0]+1;i++)
    {

        incv.push_back(i);
    }
    for(int i=v[0]-1;i<n+v[0]-1;i++)
    {

        decv.push_back(i);
    }

    for(int i=0;i<n;i++)
    {

       if(abs(v[i]-zerov[i]<=1)){zero++;}
       if(abs(v[i]-incv[i]<=1)){inc++;}
       if(abs(v[i]-decv[i]<=1)){dec++;}

    }
    if(zero == n || inc==n || dec==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    //cout<<zero<<" "<<inc<<" "<<dec<<endl;
     }







    return 0;
}
