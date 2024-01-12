#include<bits/stdc++.h>
using namespace std;
int main()
{

   int k;
   string s;
    cin>>k>>s;
    vector<int>v(27);
    for(int i=0;s[i];i++)
          ++v[s[i]-'a'];
     // sort(v.rbegin(),v.rend());
      for(int i=0;i<v.size();i++)
      {
        if(v[i]%k!=0){cout<<"-1"<<endl;return 0;}
      }

          string ss;
           for(int j=0;j<v.size();j++)
           {
             if(v[j]){
             for(int l=0;l<(v[j]/k);l++){
             ss+=char(j+'a');
             }
            }
           }
        for(auto i=0;i<k;i++)cout<<ss;





return 0;}
