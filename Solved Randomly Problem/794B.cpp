#include<bits/stdc++.h>
using namespace std;
int main()

{
     int t;
     cin>>t;
     while(t--){
     int n;
     cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++)cin>>v[i];
     int asc=0,dec=0;

      for(int i=0;i<n-1;i++)
      {
         if(v[i]>=v[i+1])dec++ ;
         if (v[i]<=v[i+1]) asc++ ;
      }
      //cout<<asc<<" "<<dec<<endl;

      if(asc==n-1)cout<<"0"<<endl;
      else cout<<(dec+1)/2<<endl;
     }


    return 0;
}
