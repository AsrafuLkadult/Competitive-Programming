#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
  {
      int n,u,d,l,f,on=0,th=0,tw=0,fh=0;
      cin>>n>>u>>d>>l>>f;
      if(n==u)on++;
      if(n==d)tw++;
      if(n==l)th++;
      if(n==f)fh++;
      if(u>=tw+fh)cout<<"YES"<<endl;
      else if(l>=tw+fh)cout<<"YES"<<endl;
      else if(d>=on+th)cout<<"YES"<<endl;
      else if(f>=on+th)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;



  }




    return 0;
}

