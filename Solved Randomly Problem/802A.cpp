#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
     while(t--)
     {
         long long n,m,sum=0;
         cin>>n>>m;
         long long minn=min(n,m);
         //sum+=(minn*(minn+1))/2;

         long long ans=n*m;

         for(long long i=0;i<n;i++)
         {

             sum+=(ans-(i*m));
         }
         m-=1;
         sum+=(m*(m+1))/2;
         cout<<sum<<endl;

     }

    return 0;
}
