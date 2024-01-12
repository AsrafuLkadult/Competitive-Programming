#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
    cin>>t;
     while(t--)
     {
        string s;
         cin>>s;
         if(s.length()%2!=0 or (s[0]==')' or s[s.length()-1]=='('))cout<<"NO"<<endl;
         else cout<<"YES"<<endl;




     }




    return 0;
}
