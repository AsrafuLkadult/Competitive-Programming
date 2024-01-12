#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        int ans = count(s.begin(),s.end(),'G')+count(s.begin(),s.end(),'B') ;
        int ans2 = count(s1.begin(),s1.end(),'G')+count(s1.begin(),s1.end(),'B');

        if(ans == ans2 && ans>0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;




    }






    return 0;
}
