#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
      cin>>t;
       while(t--)
       {

           int n,one=0,two=0;
           cin>>n;
        for(int i=0;i<n;i++)
        {   int x;
            cin>>x;
            if(x==2)two++;
            else one++;
        }
        if((two&1 and one&1) or (one%2!=0 and two%2==0 ) or (one==0 and two%2!=0) or(two==0 and one%2!=0) )cout<<"NO"<<endl;
        else cout<<"YES"<<endl;




       }




    return 0;
}
