#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
   cin>>t;
    while(t--)
    {

         int a[]={9,8,7,6,5,4,3,2,1,0};
         int n;
          cin>>n;




          for(int i=0;i<n;i++)
          {
            cout<<a[i%10];
          }cout<<endl;






    }



    return 0;
}
