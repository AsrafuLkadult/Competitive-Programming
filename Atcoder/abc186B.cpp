#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;
 int main()
 {
      int n,m;
      cin>>n>>m;
      vector<int>v;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               int x;
               cin>>x;
               v.push_back(x);

           }


       }
       sort(v.begin(),v.end());
       int f=v[0];
       int sum=0;
       for(auto it:v)
       {
           sum+=abs(f-it);


       }
       cout<<sum<<endl;




     return 0;
 }


