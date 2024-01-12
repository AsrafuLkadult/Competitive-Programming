#include <bits/stdc++.h>
using namespace std;
int main()
{
   int z; cin>>z;
   while(z--){
      int n; cin>>n;
      int a[n+1];
      map<int,int> m;
      set<int> p;
      for(int i=1;i<=n;i++){
         cin>>a[i];
         if(m.find(a[i])==m.end())
         m[a[i]]=i;
      }
      int x;
      for(x=n;x>=1;x--){
         if(a[x]<a[x-1]) break;
         if((a[x]!=a[x-1]) && (m[a[x]]!=x)) break;
      }
      for(x--;x>0;x--)
      p.insert(a[x]);
      cout<<p.size()<<endl;
 }
 return 0;
}
