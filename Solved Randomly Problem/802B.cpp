#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    vector<int>v,v1;
    string s;
    cin>>s;

   for(int i=0;i<n;i++)
    {
        v.push_back(9-s[i]+'0');
    }
     if(s[0] !='9')for(int i=0;i<n;i++)cout<<v[i];
     else
     {
         reverse(s.begin(),s.end());
         int cnt=0;
         for(int i=0;i<s.size();i++)
         {

             if(s[i]=='1' && cnt==0)v1.push_back(0);
             else if(s[i]=='0' && cnt==0){v1.push_back(1);cnt=0;}
             else
             {
               if(cnt >0){
                   if(10-s[i]+'0' == 10){v1.push_back(0);cnt=0;}
                   else
                    v1.push_back(10-s[i]+'0');}
               else {v1.push_back(11-s[i]+'0');cnt++;}
               }


             }


          reverse(v1.begin(),v1.end());
         for(int i=0;i<n;i++)cout<<v1[i]; }cout<<endl;



    }



         return 0;
}
