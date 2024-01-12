#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,sum=0;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       {
           int x;
           cin>>v[i];
           //sum+=x;

       }
       if(v[v.size()-1]%2==0)cout<<"Joe"<<endl;
       else cout<<"Mike"<<endl;



   }




    return 0;
}
