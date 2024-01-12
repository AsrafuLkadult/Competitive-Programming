#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     while(t--){
   int n;
   string s;
   cin>>n>>s;
   bool ok=false;



  if(s[0]=='M' or s[s.size()-1]=='M' or count(s.begin(),s.end(),'M')!=(count(s.begin(),s.end(),'T')/2))ok=true;
  else{
    int TT=0,MM=0,T=0,M=0;
  for(int i=0;i<s.length();i++)
   {


        if(s[i]=='T')
       {
           TT++;
       }
       else MM++;
        if(TT<MM){ok=true;break;}

   }

    reverse(s.begin(),s.end());

   for(int i=0;i<s.length();i++)
   {



        if(s[i]=='T')
       {
           T++;
       }
       else M++;
        if(T<M){ok=true;break;}

   }

  }

  if(ok!=1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
     }



    return 0;
}

