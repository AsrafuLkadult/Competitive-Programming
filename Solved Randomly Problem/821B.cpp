#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while(t--)
   {
       int n,x,y;
       cin>>n>>x>>y;

       if((x==0 && y==0) or (x!=0 && y!=0) or (n-1)%max(x,y)!=0)
       {
           cout<<"-1"<<endl;

       }

       else
       {
           int player=2;
          for(int i=0;i<(n-1)/max(x,y);i++)
          {

              for(int j=0;j<max(x,y);j++){
                cout<<player<<" ";}
              player+=max(x,y);
          }
          cout<<endl;


       }




   }






    return 0;
}

