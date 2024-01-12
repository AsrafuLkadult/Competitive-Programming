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

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int difference = *max_element(a.begin(),a.end())- *max_element(b.begin(),b.end());

    if(difference < 0){cout<<"NO"<<endl;}
    else
    {
        for(int i=0;i<n;i++)
         a[i]=(a[i]-difference);


    for(int i=0;i<n;i++)
         if(a[i]<0){a[i]=0;}

//    for(int i=0;i<n;i++)
//         cout<<a[i]<<" "<<b[i]<<endl;
//
//         cout<<endl;

        if(a==b)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    }



    return 0;
}
