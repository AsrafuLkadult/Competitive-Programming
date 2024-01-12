#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x;
    long long sum=0;
     cin>>n>>x;
     for(int i=0;i<n;i++)
     {
          int num;
          cin>>num;
          sum+=num;
          while(num%x==0)
          {
              sum+=num;
              num/=x;

          }
          cout<<sum<<num<<endl;





     }






    return 0;
}

