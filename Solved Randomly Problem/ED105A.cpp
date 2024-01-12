#include<bits/stdc++.h>
using namespace std;
bool LOL (string str )
{
 stack <char> s;

 char top;
 for(int i = 0; i< str .length(); i++){
   if(str [i] == '('){
     s.push(str [i]);
   }
   else
   {
     if(s.empty()){
       return 0;
     }
      else{
      top = s.top();
      if(str [i] == ')' && top == '(') {
        s.pop();
      }
      else{
        return 0 ;
      }
     }
   }
 }

 if (s.empty()){
   return 1;
 }
 else{
   return 0;
 }
}
int main()
{

   int tst;
   cin>>tst;
    while(tst--){
  string str,s1="",s2="",s3="",s4="",s5="",s6="";
  cin>>str;
  for(int i=0;i<str.length();i++)
  {

      if(str[i]=='A')s1+='(';
      if(str[i]=='B')s1+='(';
      if(str[i]=='C')s1+=')';

  }
   for(int i=0;i<str.length();i++)
  {

      if(str[i] =='A')s2+=')';
      if(str[i] =='B')s2+='(';
      if(str[i] =='C')s2+='(';

  }
   for(int i=0;i<str.length();i++)
  {

      if(str[i] =='A')s3+='(';
      if(str[i] =='B')s3+=')';
      if(str[i] =='C')s3+='(';

  }

for(int i=0;i<str.length();i++)
  {

      if(str[i] =='A')s4+=')';
      if(str[i] =='B')s4+=')';
      if(str[i] =='C')s4+='(';

  }
   for(int i=0;i<str.length();i++)
  {

      if(str[i] =='A')s5+='(';
      if(str[i] =='B')s5+=')';
      if(str[i] =='C')s5+=')';

  }
   for(int i=0;i<str.length();i++)
  {

      if(str[i] =='A')s6+=')';
      if(str[i] =='B')s6+='(';
      if(str[i] =='C')s6+=')';

  }
 if(LOL (s1)==1)cout<<"YES"<<endl;
 else if(LOL (s2)==1)cout<<"YES"<<endl;
 else if(LOL (s3)==1)cout<<"YES"<<endl;
 else if(LOL (s4)==1)cout<<"YES"<<endl;
 else if(LOL (s5)==1)cout<<"YES"<<endl;
 else if(LOL (s6)==1)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
    }




    return 0;
}
