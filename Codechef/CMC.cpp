#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
   cin>>t;
   while(t--)
   {
       int n,m,k;
       cin>>n>>m>>k;
       int ans=0;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               int p=k+i+j;
               ans^=p;

           }

       }

   cout<<ans<<endl;
   }



    return 0;
}

