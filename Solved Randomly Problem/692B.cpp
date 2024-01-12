#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
      while(t--)
      {
          long long n;
          cin>>n;
           long long k=n;
           vector<long long>v;
          while(n!=0)
          {
              v.push_back(n%10);
              n/=10;
            }
              long long f=*max_element(v.begin(),v.end());
            for(long long i=0;i<v.size();i++)cout<<f;cout<<endl;



      }




    return 0;
}

