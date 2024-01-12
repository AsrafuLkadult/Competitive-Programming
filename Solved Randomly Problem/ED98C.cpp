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
          int ans=0,f=0,k=0;
          for(int i=0;i<s.length();i++)
          {
              if(s[i]=='(')f++;
              else if(s[i]=='[')k++;
              else if(s[i]==')')
              {
                  if(f>0)ans++,f--;


              }
              else if(s[i]==']')
              {
                  if(k>0)ans++,k--;
              }


          }
          cout<<ans<<endl;

    }


    return 0;
}
