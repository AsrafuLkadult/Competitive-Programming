#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x-1;
        }
        if(sum & 1)cout<<"errorgorn"<<endl;
        else cout<<"maomao90"<<endl;



    }




    return 0;
}
