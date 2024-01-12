#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    int ar[n],br[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>br[i];
    bool f=false;
    int sum;
    for(int i=0;i<n;i++)
    {
      int d= br[i]-1;
      int g= d/a;
      g++;
      int ans=ar[i]*g;
      if(ans/b > 1){f=true;break;}

    }
      if(f==1)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
     }


    return 0;
}
