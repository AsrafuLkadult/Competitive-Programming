#include<bits/stdc++.h>
using namespace std;
typedef int ll;
int main()
{
   string s;
   cin>>s;
   int len = s.length();
   vector<int>v(len),prefix(len);
   for(int i=0;i<len;i++)
   {
       v[i] = (s[i]==s[i-1]) ? 1 : 0;
   }
   prefix[0]=v[0];    // for cumulative sum
   for(int i=1;i<len;i++)
   {
       prefix[i]=prefix[i-1]+v[i];
   }
   //for(auto it:prefix)cout<<it<<" ";
   int queries ;
   cin>>queries;
       while(queries--)
       {
           int lb,ub;
           cin>>lb>>ub,lb--,ub--;

           cout<<prefix[ub]-prefix[lb]<<endl;
       }





return 0;}
