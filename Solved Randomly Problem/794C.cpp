#include<bits/stdc++.h>
using namespace std;
int main()

{

  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   int val=n/2;
   if(n%2 !=0){val++;}
   vector<int>v(n);
    vector<int>maxx,minn;
     for(int i=0;i<n;i++)cin>>v[i];
     sort(v.begin(),v.end());
     set<int>s(v.begin(),v.end());
      for(int i=0;i<val;i++)minn.push_back(v[i]);
      for(int i=val;i<n;i++)maxx.push_back(v[i]);
//      for(int i=0;i<val;i++)cout<<minn[i]<<" ";
//      cout<<endl;
//      for(int i=0;i<maxx.size();i++)cout<<maxx[i]<<" ";;

       if(s.size() > (n/2)+1){

       if(n%2==0){
      int ans=0;
      for(int i=0;i<maxx.size();i++)
        if(maxx[i]>minn[i])ans++;

        if(ans==n/2)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<maxx.size();i++)
           cout<<minn[i]<<" "<<maxx[i]<<" ";
           cout<<endl;

        }
        else cout<<"NO"<<endl;

       }

       else
       {
           int ans=0;
      for(int i=0;i<maxx.size();i++)
        if(maxx[i]>minn[i])ans++;

        if(ans==n/2)
        {
            cout<<"YES"<<endl;
           for(int i=0;i<maxx.size();i++)
          cout<<minn[i]<<" "<<maxx[i]<<" ";
           cout<<minn[minn.size()-1];
          cout<<endl;

        }
        else
cout<<"NO"<<endl;
       }

       }
       else cout<<"NO"<<endl;


  }



 return 0;
}
