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
        if(n==1 ){cout<<"0"<<endl;}
        else if(n==2 ){cout<<"1 0"<<endl;}
        else if(n%2==0)
        {

            cout<<"0 ";
            for(int i=n-1;i>=1;i--){cout<<i<<" ";}cout<<endl;


        }
         else
        {

            cout<<"1 0 2 ";
            for(int i=n-1;i>=3;i--){cout<<i<<" ";}cout<<endl;


        }




    }





    return 0;
}
