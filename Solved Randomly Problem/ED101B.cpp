#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
     while(t--)
     {
         int n,m;
         cin>>n;
         int max_sum=0,red=0,blue=0,max_sum1=0;
         while(n--)
         {
             int x;
             cin>>x;
             red+=x;
             max_sum=max(max_sum,red);

         }

         cin>>m;
          while(m--)
         {
             int d;
             cin>>d;
             blue+=d;
             max_sum1=max(max_sum1,blue);

         }
         cout<<max_sum+max_sum1<<endl;





     }





    return 0;
}
