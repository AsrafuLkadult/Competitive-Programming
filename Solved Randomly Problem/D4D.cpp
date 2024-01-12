#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b,c;
    cin>>a>>b;
    c=b-a;
    string s=to_string(a);
    string f=to_string (c);
    sort(s.begin(),s.end());
    sort(f.begin(),f.end());
    if(s==f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;







    return 0;
}

