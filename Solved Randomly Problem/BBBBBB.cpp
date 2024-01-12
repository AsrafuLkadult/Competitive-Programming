#include<bits/stdc++.h>
using namespace std;
int main()
{


     int t;
     cin>>t;
     while(t--)
     {
        int n,sizze=0,ele=0;
        cin>>n;
        //vector<int>v(n);
        //set<int>s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            //v.push_back(x);
//            s.insert(x);
            if(x<=n)
                sizze++;

        }

//        //cout<<s.size()<<endl;
//        int maxx=*max_element(v.begin(),v.end());
//        if(maxx > n )cout<<"-1"<<endl;
//        else {
//               if( (s.size()==n and maxx==n ) || (s.size()==1 && maxx==1)){
//            cout<<n<<" ";
//            for(int i=1;i<n;i++)cout<<i<<" ";
//            cout<<endl;}
//            else cout<<"-1"<<endl;

          if(sizze!=n)cout<<"-1"<<endl;
          else
          {
              cout<<n<<" ";
              for(int i=1;i<n;i++)
              {
                  cout<<i<<" ";
              }cout<<endl;


          }

        }









    return 0;
}

