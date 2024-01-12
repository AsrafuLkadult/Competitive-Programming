#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;string s;
 cin>>n>>s;
  vector<char>even,odd;
  for(int i=1;i<s.length();i++)
     {
      if(i&1)odd.push_back(s[i]);
      else even.push_back(s[i]);
    }
    if(n&1){
     reverse(odd.begin(),odd.end());
     for(auto i:odd)cout<<i;
      cout<<s[0];
     for(auto i:even)cout<<i;

      }
      else {
     // reverse(odd.begin(),odd.end());
      for(auto i:even)cout<<i;

        cout<<s[0];
         for(auto i:odd)cout<<i;
        }





return 0;}


