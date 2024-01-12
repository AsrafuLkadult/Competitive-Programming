#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()>s2.size())cout<<"No"<<endl;
    else
    {
        string nw = "";
        for(int i=0;i<s1.size();i++)nw+=s2[i];
        if(s1 == nw )
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;



    }




    return 0;
}

