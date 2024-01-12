#include<bits/stdc++.h>
using namespace std;
 int main()

{

    int t;
     cin>>t;
     while(t--)
     {
         int n,k,d;
         cin>>n>>k>>d;
           long long sum=0;
           int x;
            for(int i=0;i<n;i++){cin>>x;sum+=x;}
            cout<<min(int (sum/k),d)<<endl;


     }



    return 0;
}
