#include<bits/stdc++.h>
using namespace std;
int main()
{


     int t;
      cin>>t;
       while(t--)
       {
          int n,alice=0,bob=0,others;
           cin>>n;
           int cnt=1;
           for(int i=0;i<n;i++)
           {   int x;
               cin>>x;
               if(cnt%2!=0){
                    if(x%2==0){
                    alice+=x;
                    }
                    else
                    {

                       others+=x;
                    }
                    cnt++;
                    }
               else
               {

                   if(cnt%2==0){
                    if(x%2!=0){
                    bob+=x;
                    }
                    else
                    {

                       others+=x;
                    }
                    cnt++;

               }


           }

           }



           if(bob>alice)cout<<"Bob"<<endl;
           else if(alice>bob)cout<<"Alice"<<endl;
           else if(alice==bob and alice!=0 and bob!=0) cout<<"Tie"<<endl;
           else cout<<"Alice"<<endl;



       }



    return 0;
}
