#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
   cin>>t;
    while(t--)
    {
         int mand ,lol ;
          cin>>mand >>lol ;
           if(mand ==lol )cout<<mand +lol <<endl;
           else
           {

               cout<<(max (mand ,lol )*2)-1<<endl;

           }



    }


    return 0;
}
