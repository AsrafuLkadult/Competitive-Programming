#include<bits/stdc++.h>
using namespace std;
int main()
{

  int nhgd;
  cin>>nhgd;
  while(nhgd--)
  {
      long long t;
      cin>>t;
      long long f=t%10;
      long long d=t/2;

      if(t%3==0 or t%7==0 or t%5==0 or t%2!=0 or (d%10)%2!=0)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
  }








    return 0;
}
