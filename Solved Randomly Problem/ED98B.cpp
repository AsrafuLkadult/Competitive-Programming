#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
   while(t--)
   {

        int n;
         cin>>n;
         int a[n];
         long long sum=0;
         for(int i=0;i<n;i++)
         {
             int x;
             cin>>x;
             sum+=x;


         }
         cout<<sum%(n-1)<<endl;




   }




    return 0;
}
