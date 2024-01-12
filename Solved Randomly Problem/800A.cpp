#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--)
    {

        int a,b;
        cin>>a>>b;
        int ans=min(a,b);
        for(int i=0;i<ans;i++)
        {
            cout<<"01";
        }

            for(int i=0;i<a-ans;i++)cout<<"0";

            for(int i=0;i<b-ans;i++)cout<<"1";
            cout<<endl;


    }





    return 0;
}
