#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   vector<int>a(n),b(n);
   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int i=0;i<n;i++)
    cin>>b[i];

   vector<int>v;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    bool f=0;
    for(int i=0;i<n;i++)
    {

        int x=a[i]-b[i];
        if(x<0){f=1;break;}
        else
        {
            v.push_back(x);
        }

    }
    if(f==1)cout<<"NO"<<endl;
    else
    {
         int cnt=0;
        for(int i=0;i<n;i++)
    {
        a[i]=(a[i]-v[i]);

    }
      for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])cnt++;

    }
    if(cnt==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;






    }



    }

    return 0;
}

