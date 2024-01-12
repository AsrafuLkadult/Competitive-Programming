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
         int f=n%10;
         int ans=2021*f;
         int ans1=abs(n-ans);
         if(ans1%2020==0 and ans1+ans==n)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;



     }





    return 0;
}

