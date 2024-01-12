#include<bits/stdc++.h>
using namespace std;

 int main()
 {
      int mm;
       cin>>mm;
        while(mm--){
      int n;
      string s,s1;
      cin>>n>>s>>s1;
       int f=0,sc=0,eq=0;


      for(int i=0;i<n;i++)
      {

          if(s[i]<s1[i])sc++;
          else if(s[i]>s1[i])f++;

      }


     if(sc==f)cout<<"EQUAL"<<endl;
     else if(sc>f)cout<<"BLUE"<<endl;
     else cout<<"RED"<<endl;
        }

     return 0;
 }
