#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
     cin>>t;
      while(t--)
      {
          int w,h,n,ans=0;
          cin>>w>>h>>n;

          while(1)
          {
               if(w%2!=0){break;}
              ans++;
              w/=2;


          }
           while(1)
          {  if(h%2!=0){break;}
              ans++;
              h/=2;
          }


           if(ans*ans + 1 <n)cout<<"NO"<<endl;
           else cout<<"YES"<<endl;




      }




    return 0;
}
