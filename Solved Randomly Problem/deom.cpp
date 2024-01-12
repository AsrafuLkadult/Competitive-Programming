#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>k;
   long long ans=0;
   for(int i=01;i<=k;i++)
   {
       for(int j=1;j<=k;j++)
       {

           for(int l=1;l<=k;l++)
           {
              long long sum=(long long)i*(long long)j*(long long)l;
              if(sum<=(long long)k){ans++;}


           }

       }


   }
    cout<<ans<<endl;

}
