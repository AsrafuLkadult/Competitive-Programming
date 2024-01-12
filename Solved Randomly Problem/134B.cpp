#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
    cin>>t;
    while(t--)
   {
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        bool f=0;
        vector<int>v1,v2;
        for(int i=1;i<=m;i++)
        {
            v1.push_back(abs(1-sx)+abs(i-sy));
        }
         for(int i=1;i<=n;i++)
        {
           // cout<<i<< " "<<m<<endl;
            v1.push_back(abs(i-sx)+abs(m-sy));
        }

         for(int i=1;i<=n;i++)
        {
            v2.push_back(abs(i-sx)+abs(1-sy));
        }
         for(int i=1;i<=m;i++)
        {
           // cout<<i<< " "<<m<<endl;
            v2.push_back(abs(n-sx)+abs(i-sy));
        }


  if(*min_element(v1.begin(),v1.end()) <=d && *min_element(v2.begin(),v2.end())<=d)
     cout<<"-1"<<endl;
     else cout<<n-1+m-1<<endl;

}


    return 0;
}

