#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d,e;
       cin>>a>>b>>c>>d>>e;
       int f=c*e;
       int df=d*e;
       int ans=abs(b-a);

       if(ans<min(f,df) or ans>max(df,f))cout<<"0"<<endl;
       else cout<<"1"<<endl;


   }

    return 0;
}
