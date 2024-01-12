#include<bits/stdc++.h>
using namespace std;
int main()
{


   int t;
    cin>>t;
    while(t--)
    {
         int n,x;
         cin>>n;
         vector<int>a,b,c;

         for(int i=0;i<n;i++)
         {
             cin>>x;
             a.push_back(x);
             c.push_back(x);


         }
         sort(a.begin(),a.end());
          for(int i=0;i<n;i++)
         {
             cin>>x;
             b.push_back(x);
             c.push_back(x);


         }
         sort(b.begin(),b.end());

          for(int i=0;i<n;i++)cout<<a[i]<<" "<<b[i]<<endl;



    }



    return 0;
}
