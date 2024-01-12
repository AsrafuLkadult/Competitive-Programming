#include<bits/stdc++.h>
using namespace std;
int main()
{

   int kh;
   cin>>kh;
    while(kh--)
    {      int n;
           string s;
           cin>>n>>s;
           reverse(s.begin(),s.end());
           int cnt=0;
           for(int i=0;i<n;i++)
           {
               if(s[i]!=')'){break;}
               else cnt++;


           }
           if((n-cnt)<cnt)cout<<"Yes"<<endl;
           else cout<<"No"<<endl;
       }




    return 0;
}

