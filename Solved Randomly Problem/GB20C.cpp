#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
    while(t--)
   {

        int n;
         cin>>n;
         vector<int>v;
         set<int>s;
         //pairr.push_back(0);
         for(int i=0;i<n;i++)
         {
              int d;
            cin>>d;
            v.push_back(d);
         }
         int xx=0,yy=0,cnt=0;
         for(int i=0;i<n-1;i++)
         {
             int x,y;
             x=i+1;
             y=i+2;

            if(v[i]==v[i+1] && ( yy != x))
            {
//               cout<<xx<<" "<<yy<<endl;
//               cout<<x<<" "<<y<<endl;
               xx=x;
               yy=y;
               cnt++;

            }

         }
       if(cnt==(n+1)/2)
       cout<<cnt-1<<endl;
       else cout<<cnt<<endl;
   }



    return 0;
}

