#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
   string decode="", s ="abcdefghijklmnopqrstuvwxyz";
   int n;
   cin>>n;
   string v;
   cin>>v;

  reverse(v.begin(),v.end());
  int i=0;
   while(i<n)
       {


              if(v[i]=='0') {
              int num =  ((v[i+2]-'0') * 10 )+ (v[i+1]-'0');
              if(num<=26){
              decode+=s[num-1];
              }

              else
               {
               for(int j=i;j<i+3;j++){
               int num = (v[j]-'0');
               if(num==0)num++;
               decode+=s[num-1];
               }
               }
               i+=3;
              }

              else
              {
               int num = (v[i]-'0');
               if(num==0)num++;
               decode+=s[num-1];
               i++;
              }


  }
  reverse(decode.begin(),decode.end());
  cout<<decode<<endl;

  }


    return 0;
}

