#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if(n%4==2)cout<<n<<endl;
   else
   {
       if(n%4!=0)
       cout<<n+(n%4)<<endl;
       else cout<<n+2<<endl;

   }


    return 0;
}

