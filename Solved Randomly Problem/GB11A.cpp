#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;
     while(t--)
     {
         int n,z;
         cin>>n>>z;
         //vector<int>v(n);
         int maxx = 0;
         for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         maxx = max({maxx,x&z,x|z});

     }
     cout<<maxx<<endl;
     }




    return 0;
}
