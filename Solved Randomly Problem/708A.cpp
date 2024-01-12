#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ter;
    cin>>ter;
     while(ter--){
   int lol;
   cin>>lol;
   vector<int>hgd(lol);
   vector<int>fok;
   for(auto &it:hgd)cin>>it;
   sort(hgd.begin(),hgd.end());
   hgd.push_back(0);
   for(int i=1;i<hgd.size();i++)
   {
       if(hgd[i-1]!=hgd[i])cout<<hgd[i-1]<<" ";
       else{ fok.push_back(hgd[i]);}

   }
   sort(fok.begin(),fok.end());
   for(auto it:fok)cout<<it<<" ";cout<<endl;
}

  return 0;
}
