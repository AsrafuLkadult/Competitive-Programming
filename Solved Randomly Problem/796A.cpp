#include<bits/stdc++.h>
using namespace std;
int powerOfTwo(int n)
    {
        return n && (!(n & (n-1)));
    }
int main()
{

   int t;
   cin>>t;
   while(t--)
   {
       int x;
       cin>>x;
       int f=powerOfTwo(x);
       if(x==1 || x==2)cout<<"3"<<endl;
       else if(x%2!=0){cout<<"1"<<endl;}
       else if(f==1)cout<<x+1<<endl;
       else if(x%2==0 and x%4!=0)cout<<"2"<<endl;
       else {
              string num=to_string(x);
              cout<<pow(2,num.size()-1)<<endl;

       }







   }



    return 0;
}
