#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,k,m;
      cin>>n>>m>>k;
      int ans=0;
      while(n--)
      {

           long long sum=0;
           for(int i=0;i<k;i++)
           {
                int x;
                cin>>x;
                sum+=x;
           }
           int q;
           cin>>q;
           if(sum>=m and q<=10)ans++;
          }
          cout<<ans<<endl;


    return 0;
}
