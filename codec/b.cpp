
#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
   cin>>t;
   while(t--)
   {
        string s,s1;
        cin>>s>>s1;
        vector<int>even,odd;
         for(int i=0;i<s.length();i++)
         {
             if(s[i]!=s1[i])
             {
                if((i+1)&1){odd.push_back((i+1));}
                else{ even.push_back((i+1));}
             }
         }
           int ans=1;
         if(odd.size()!=0)
         {
             int num1=0;
             for(int i=odd[0];i<=odd[odd.size()-1];i+=2){
                     num1++;}
                  ans+=(num1-odd.size());

         }
             int ans1=1;
         if(even.size()!=0)
         {
             int num=0;
             for(int ff=even[0];ff<=even[even.size()-1];ff+=2){
                     num++;}
                    ans1+=(num-even.size());
         }
        if(odd.size()==0 and even.size()!=0)cout<<ans1<<endl;
         else if(even.size()==0 and odd.size()!=0)cout<<ans<<endl;
         else if(odd.size()==0 and even.size()==0)cout<<"0"<<endl;
         else cout<<ans+ans1<<endl;





   }
    return 0;
}
