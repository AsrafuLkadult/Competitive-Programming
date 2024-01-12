#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
     while(t--)
     {
         int a;
         string s;
         cin>>a>>s;
         if(a==1)cout<<"-1"<<" "<<"-1"<<endl;
         else {
         for(int i=0;i<s.length();i++)
         {
             if(s[i]!=s[i+1]){cout<<i+1<<" "<<(i+1)+1<<endl;break;}
             else {cout<<"-1"<<" "<<"-1"<<endl;break;}
         }


     }
     }


    return 0;
}
