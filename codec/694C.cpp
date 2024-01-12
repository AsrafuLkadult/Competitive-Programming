#include<bits/stdc++.h>
using namespace std;
int main()
{



    int t;
     cin>>t;
      while(t--)
      {

          int n,x;
           cin>>n>>x;
           long long sum=0,ans=0,others=0,sum1=0;
                        for(int i=0;i<n;i++)
             {

                 int f;
                 cin>>f;
                 sum1+=f;
                 sum+=ceil(f/(double)x);
                 if(f<x){others+=f;}
                 else
                 {

                 ans+=ceil(f/(double)x);
                 }


             }
             cout<<min((int)ceil(sum1/(double)x),max(sum,ans+(int)ceil(others/(double)x)))<<" "<<max((int)ceil(sum1/(double)x),max(sum,ans+ (int)ceil(others/(double)x)))<<endl;


      }




    return 0;
}
