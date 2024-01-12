#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
     while(t--){
  int n,d;
   cin>>n>>d;
     d-=3;
     n-=d;
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
        cout<<n/2<<" "<<n/2<<" "<<"1"<<" ";

       for(int i=0;i<d;i++)
        cout<<"1"<<" ";cout<<endl;

     }

    return 0;
}


