#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
     cin>>t;
      while(t--)
      {
          int n;
           string s,s1;
           string final = "abcdefghijklmnop";
            cin>>n>>s;
            for(int i=4;i<=n;i+=4)
            {
                string s3="";
                s3+=s[i-4];
                s3+=s[i-3];
                s3+=s[i-2];
                s3+=s[i-1];
               int  number = stoi(s3, 0, 2);
               cout<<final[number];
            }

          cout<<endl;

      }




    return 0;
}
