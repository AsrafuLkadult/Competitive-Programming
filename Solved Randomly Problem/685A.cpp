#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxx;
     cin>>maxx;
     while(maxx--){
   int n;
   cin>>n;
    int kkk=n/2;
     if(n==1)cout<<"0"<<endl;
     else if(n==2)cout<<"1"<<endl;
     else if(n==3)cout<<"2"<<endl;
    else if(n%kkk==0 and n>3)
    {
        cout<<n/kkk<<endl;
    }
    else
    {

        cout<<(n/kkk)+1<<endl;

    }

     }

    return 0;
}
