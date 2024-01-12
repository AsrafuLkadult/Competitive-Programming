#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
      cin>>t;
       while(t--){

     int n,m;
      cin>>n>>m;
      set<int>sd;
       for(int i=0;i<n;i++)
       {
           int x;
           cin>>x;
           sd.insert(x);

       }
       for(int i=0;i<m;i++)
       {
           int x;
           cin>>x;
           sd.insert(x);

       }

      cout<<(n+m)-sd.size()<<endl;
       }




    return 0;
}
