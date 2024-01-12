#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {   int n,xmax=0,xmin=0,ymax=0,ymin=0;
        cin>>n;
        while(n--){
        int x,y;

        cin>>x>>y;
        xmax=max(xmax,x),xmin=min(xmin,x),ymax=max(ymax,y),ymin=min(ymin,y);

        }
       cout<<xmax*2+ymax*2+abs(ymin)*2+abs(xmin)*2<<endl;

    }





    return 0;
}
