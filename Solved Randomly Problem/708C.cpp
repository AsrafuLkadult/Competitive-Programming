#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
     while(t--){
  int n,k;
   cin>>n>>k;
   if(n%2==0)
       {
           int k=n/2;
           if(k%2==0){
            cout<<n/2<<" "<<k/2<<" "<<n-(n/2+k/2)<<endl;
           }
           else
           {
               cout<<k-1<<" "<<k-1<<" "<<n-(2*(k-1))<<endl;
           }
       }
       else
        cout<<n/2<<" "<<n/2<<" "<<"1"<<endl;


     }

    return 0;
}

