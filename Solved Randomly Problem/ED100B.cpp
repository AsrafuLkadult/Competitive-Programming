#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
     cin>>t;
      while(t--)
      {
          int a,b,c;
          cin>>a>>b>>c;
          int f=min(a,min(b,c));
          if(a%7 +b%7+c%7<7)cout<<"NO"<<endl;
          else cout<<"YES"<<endl;



      }




    return 0;
}

