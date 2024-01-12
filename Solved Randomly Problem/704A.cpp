#include<bits/stdc++.h>
using namespace std;
int main()
{

  int kkkk;
  cin>>kkkk;
   while(kkkk--){
   long long p,a,b,c,an,bn,cn;
   cin>>p>>a>>b>>c;
   vector<long long>v;
   an=p/a;
   bn=p/b;
   cn=p/c;
   if(an==0)an++;
   if(bn==0)bn++;
   if(cn==0)cn++;
   v.push_back((an*a)-p);
   an++;
   v.push_back((an*a)-p);
   v.push_back((bn*b)-p);
   bn++;
   v.push_back((bn*b)-p);
   v.push_back((cn*c)-p);
   cn++;
   v.push_back((cn*c)-p);

    sort(v.begin(),v.end());
   for(long long i=0;i<v.size();i++)
   {
       if(v[i]>=0){cout<<abs(v[i])<<endl;break;}

   }

   }



    return 0;
}
