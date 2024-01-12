#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
   cin>>n;
   vector<long long>od,ev;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
         od.push_back(x);
    }
      sort(od.begin(),od.end());
      reverse(od.begin(),od.end());
     long long f=od[1];
      long long sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=(f-od[i]);

      }
      cout<<sum<<endl;






    return 0;
}

