#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,q;
   cin>>n>>q;
  string s;
   cin>>s;
   for(int i=0;i<q;i++)
   {
       int l,r;
       cin>>l>>r;
       vector<int>v,p;
       v.push_back(0);
       p.push_back(0);
       for(int j=l;j<=r;j++)
       {
          auto f = find(s.begin()+v[v.size()-1],s.end(),s[j-1]);
          v.push_back((f-s.begin())+1);
       }
      // reverse(s.begin(),s.end());
       for(int c=l;c<=r;c++)
       {
          auto f = find(s.begin()+p[p.size()-1],s.end(),s[c-1]);
          p.push_back((f-s.begin())+1);
       }
       sort(p.begin(),p.end());
       sort(v.begin(),v.end());
       bool sd=0;
       for(int gg=0;gg<v.size();i++)
       {
          cout<<v[gg]<<endl;

       }

   }





    return 0;
}

