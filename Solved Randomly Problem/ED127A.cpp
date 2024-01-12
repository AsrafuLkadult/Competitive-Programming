#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
     bool f=0;
     if((s[0]=='a' && s[1]=='b') || (s[0]=='b' && s[1]=='a') || s.size()<2){f=1;}
     else
     {


     for(int i=1;i<s.size();i++)

     {
         if(s[i]=='a' && (s[i-1]!=s[i] && s[i]!=s[i+1]))
         {
             f=1;break;
         }
         if(s[i]=='b' && (s[i-1]!=s[i] && s[i]!=s[i+1]))
         {
             f=1;break;
         }

     }
     }
     if(f==1)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
    }



    return 0;
}
