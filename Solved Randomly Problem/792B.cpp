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
     vector<int>v;
     //string s=to_string(n);
     while(n!=0)
     {
         v.push_back(n%10);
         n/=10;

     }

     if(v.size()==2)
     {
         cout<<v[0]<<endl;
     }
     else{
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;}
   }


    return 0;
}
