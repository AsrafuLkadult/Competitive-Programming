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
        vector<int>v(n),chk(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        chk=v;
        sort(chk.begin(),chk.end());
        if(chk[0]!=0 )cout<<"1"<<endl;
        else if (chk[n-1]==0)cout<<"0"<<endl;
        else
        {


          cout<<"2"<<endl;

    }
    }





    return 0;
}
