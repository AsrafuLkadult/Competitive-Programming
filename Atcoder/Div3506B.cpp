#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    string s,joinstr="";
    cin>>n>>k;
    cin>>s;
    set<char>uniq(s.begin(),s.end());
    int len = s.size();
    if(uniq.size()==1)
    {
        for(int i=0;i<k;i++)cout<<s[0];
        for(int j=0;j<n-1;j++)cout<<s[0];
    }
    else if(s[0] != s[len-1])
    {
        for(int i=0;i<k;i++)
        {
            cout<<s;
        }puts("");
    }

    else
    { int index;
      for(int i=0;i<len;i++)
      {
          if(s[i] != s[0])
          {
              index = i;break;
          }
      }
      for(int i=index;i<len;i++)
      {
          joinstr+=s[i];
      }
      cout<<s;
      for(int i=0;i<k-1;i++)
        {
            cout<<joinstr;
        }puts("");
    }

    return 0;
}
