#include<bits/stdc++.h>
using namespace std;
int main()

{


    int t;
     cin>>t;
      while(t--)
      {

          string s,a;
          cin>>s>>a;

          sort(s.begin(),s.end());
          int cnt=0;
          vector<int>v,ans;

         for (int i=0;i<a.length();i++)
         {
             int k =0;
             for(int j=0;j<s.length();j++)
             {

                 if(a[i]==s[j])
                 {
                     v.push_back(j);
                     k=1;break;

                 }

             }
             if(k==1){cnt++;}

         }


         if(is_sorted(v.begin(),v.end()) and cnt == 3)
         {

             for(int i=0;i<s.length();i++)
             {
                 if(s[i]!=a[1])cout<<s[i];
             }
             for(int i=0;i<s.length();i++)
             {
                 if(s[i]==a[1])cout<<s[i];
             }
             cout<<endl;



         }
         else
            cout<<s<<endl;





      }



}
