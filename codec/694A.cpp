#include<bits/stdc++.h>
using namespace std;
int main()
{



    int mnn;
     cin>>mnn;
      while(mnn--)
      {

          int d,x;
           cin>>d>>x;
           long long sum=0,ans=0;
                        for(int k=0;k<d;k++)
             {

                 int f;
                 cin>>f;
                 sum+=f;
                ans+=ceil(f/(double)x);


             }
             cout<<min(sum/x,ans)<<" "<<max(sum/x,ans)<<endl;


      }




    return 0;
}
