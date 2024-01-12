#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
      while(t--){
    int mm,pp;
      cin>>mm;
      if(mm&1){

          for(int i=1;i<=mm-1;i++)
          {
              cout<<i+1<<" ";}

             cout<<"1"<<endl;

      }
      else
      {


          for(int i=mm;i>=1;i--)
          cout<<i<<" ";
          cout<<endl;
      }
      }





    return 0;
}
