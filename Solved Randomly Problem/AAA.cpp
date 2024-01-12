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
          set<int>v,d;
          bool f=0;
          for(int i=0;i<n;i++)
          {
              cin>>x;
              if(i%2==0){
              v.insert(x%2);
              }
              else {d.insert(x%2);}

          }

           if(v.size()==1 and d.size()==1) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;









      }




    return 0;
}
