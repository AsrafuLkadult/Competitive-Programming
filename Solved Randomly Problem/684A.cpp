#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
       cin>>t;
        while(t--){
   int n,c1,c2,c3;
   cin>>n>>c1>>c2>>c3;
   string s;
   cin>>s;
   int one=0;
   for(int i=0;s[i];i++){if(s[i]=='1')one++;};
    int zero =n-one;

     int ans1=(zero*c1)+(one*c2);

     int ans2,ans3;
     int minn=min(c1,c2);
     if(minn==c1)
     {
         ans2=(n*c1)+(one*c3);
     }

    if(minn==c2) { ans3=(n*c2)+(zero*c3);}
    // cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
   cout<<min(ans1,min(ans2,ans3))<<endl;
        }
    return 0;

}
