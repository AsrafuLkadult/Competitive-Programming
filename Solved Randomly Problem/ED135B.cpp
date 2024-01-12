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

        if(n&1){
            for(int i=1;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            if(n%3!=0){
            for(int i=2;i<=n-2;i++)
            cout<<i<<" ";
            cout<<"1"<<" "<<n-1<<" "<<n<<endl;
           //cout<<endl;
            }
            else{
                 cout<<n-2<<" ";
                for(int i=2;i<=n/2;i++)
                    cout<<i<<" ";
                   // cout<<"1"<<" ";
                for(int j=n/2+1;j<=n-3;j++)
                    cout<<j<<" ";
                    cout<<"1"<<" "<<n-1<<" "<<n;
                cout<<endl;
            }





        }



    }






    return 0;
}

