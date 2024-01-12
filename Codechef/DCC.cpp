#include<bits/stdc++.h>
using namespace std;
int main()

   {

      int t;
       cin>>t;
        while(t--)
        {
              string s;
              int one=0,zero=0;
              cin>>s;
               one+=count(s.begin(),s.end(),'1');
               zero+=count(s.begin(),s.end(),'0');

              if(s.size()%2!=0 or one==s.size() or zero==s.size())cout<<"-1"<<endl;
              else cout<<(abs(zero-one))/2<<endl;


        }





    return 0;
}
