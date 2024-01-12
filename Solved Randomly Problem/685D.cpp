#include<bits/stdc++.h>
using namespace std;
int main()
{

 int n,q;
 //  cin>>n>>q;
  string s;
   cin>>s;
  string s1;
  cin>>s1;
  for(int i=0;i<s1.length();i++)
  {
      for(int j=0;j<s.length();j++)
      {
          if(s[i]==s[j])
          {
              cout<<j+1<<endl;

          }

      }


  }

       return 0;}
