
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
     string s=to_string(n);
     for(int i=0;i<s.length()();i++)
     {
         v.push_back(s[i]-'0');

     }
     cout <<(min(v.begin(),v.end()))<<endl;
   }


    return 0;
}
