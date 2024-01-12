#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if((n&1 and m&1)||(n%2==0 and m%2==0))cout<<"Tonya"<<endl;
        else cout<<"Burenka"<<endl;
    }




    return 0;
}
