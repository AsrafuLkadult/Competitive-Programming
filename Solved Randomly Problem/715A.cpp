#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
      while(t--){
  int n;
   cin>>n;
   vector<int>od,ev;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
         if(x%2==0)ev.push_back(x);
         else od.push_back(x);
    }
  for(auto it:od)cout<<it<<" ";
  for(auto it1:ev)cout<<it1<<" ";cout<<endl;
}



    return 0;
}

