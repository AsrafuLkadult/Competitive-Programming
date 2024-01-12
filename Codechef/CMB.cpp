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
          if(s.size()<5)cout<<s<<endl;
          else
          {

          for(int i=4;i<s.size();i++)
          {
            if(s[i-4]=='p' and s[i-3]=='a' and s[i-2]=='r' and s[i-1]=='t' and s[i-0]=='y'){

              s[i-4]='p';
              s[i-3]='a';
              s[i-2]='w';
              s[i-1]='r';
              s[i-0]='i';

              }

          }
          cout<<s<<endl;

          }


     }




    return 0;
}
