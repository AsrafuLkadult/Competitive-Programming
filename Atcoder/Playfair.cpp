#include <bits/stdc++.h>
using namespace std;
void int_code()
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif

}

typedef long long ll;
int main()
{    
    //int_code();
    string s,key;
    cin>>s;
    char ch=' ';
    vector<char>v;
    int len=1;
    cout<<s.size()<<endl<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
      if(ch==s[i])
      {
        if(len%2==0)
        {
           v.push_back('x');
           v.push_back(s[i]);
           len+=2;ch=s[i];
        }
        else
            {v.push_back(s[i]);
             ch=s[i];len++;
           }
      }
      else 
      {
        v.push_back(s[i]);ch=s[i];len++;
      }
    }
    if(v.size()%2!=0)v.push_back('x');
    cout<<v.size()<<endl;
    for(auto it:v)cout<<it;cout<<endl;

    return 0;
}
