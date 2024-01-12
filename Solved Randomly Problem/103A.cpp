#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
   cin>>t;
    while(t--)

    {
        int m,n;
        cin>>m>>n;
        cout<<abs((max(m,n)/min(m,n))*(min(m,n)-1)-max(m,n))<<endl;

    }


    return 0;
}
