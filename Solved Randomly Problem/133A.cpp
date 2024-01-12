#include<bits/stdc++.h>
using namespace std;
int main()
{

 int t;
 cin>>t;
 while(t--)
 {
     int x;
     cin>>x;
     int ans = x/3;
     bool p = (x%3);

     if(x==1)cout<<"2"<<endl;
     else if(x==2 || x==3)cout<<"1"<<endl;
     else if(p==1) cout<<min(x/2,x/3)+1<<endl;
     else cout<<x/3<<endl;




 }


    return 0;
}
