#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
     while(t--)
     {
         int n,k,x,y;
          cin>>n>>k>>x>>y;
         int ans=k%4;
         int fx=n;
         int fy = y+(n-x);
         bool ok=false;
         if((fx==n and fy==n) or (fx==0 and fy==0) or (fx==n and fy==0) or (fx==0 and fy==n)){ok=true;cout<<fx<<" "<<fy<<endl;}

        else if(k==1 and ok==false)
       {

           cout<<fx<<" "<<fy<<endl;

       }
       else if(ans==2 and ok==false)
       {
           cout<<fy<<" "<<fx<<endl;
       }

        else if(ans==3 and ok==false)
        {

            cout<<"0"<<" "<<abs(fx-fy)<<endl;


        }
        else if(ans==0 and ok==false)
        {
            cout<<abs(fx-fy)<<" "<<"0"<<endl;

        }




     }




    return 0;
}
