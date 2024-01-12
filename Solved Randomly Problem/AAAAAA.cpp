#include<bits/stdc++.h>
using namespace std;
int main()
{


     int t;
     cin>>t;
     while(t--)
     {
         int x,even=0,odd=0;
         cin>>x;
         for(int i=0;i<x;i++)
         {
             int p;
             cin>>p;
             if(p%2==0)even++;
             else odd++;

         }
         cout<<min(even,odd)<<endl;


     }



    return 0;
}
