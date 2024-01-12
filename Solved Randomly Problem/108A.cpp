#include<bits/stdc++.h>
using namespace std;
 int main()
 {

  int t;
   cin>>t;
    while(t--)
    {
        int r,b,d;
        cin>>r>>b>>d;
        int minn=min(r,b);
        int maxx=max(r,b);

        if(maxx%minn==0){
                if((maxx/minn)-1 <= d and maxx!=0 and minn!=0)cout<<"YES"<<endl;
                 else cout<<"NO"<<endl;
        }
        else
        {

             if((maxx/minn)<= d and maxx!=0 and minn!=0)cout<<"YES"<<endl;
                 else cout<<"NO"<<endl;

        }



    }


     return 0;
 }

