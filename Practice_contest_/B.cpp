#include<iostream>
using namespace std;
int main()
{
   long long n,x;
  string s;
  cin>>n>>x;
  cin>>s;
  long long ans=0;
ans+=x;
 for(int i=0;i<n;i++)
  {
   if(s[i]=='x'){
  if(ans>0)ans--;
  else ans=0;}
   else ans++;
}
if(ans<0)cout<<"0"<<endl;
else cout<<ans<<endl;

return 0;}
