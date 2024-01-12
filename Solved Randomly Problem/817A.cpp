#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       string s;
       string s1 = "Timur";
       sort(s1.begin(),s1.end());
       cin>>n>>s;sort(s.begin(),s.end());
       if(s== s1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

   }




    return 0;
}
