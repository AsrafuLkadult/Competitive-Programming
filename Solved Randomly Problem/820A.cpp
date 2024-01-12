#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a,b,c;
        cin>>a>>b>>c;
        int first ,second ;
        first = a-1;
        second =c-1;

            if(first == (second + abs(b-c)))cout<<"3"<<endl;
            else
            {
                cout<<(first < (second + abs(b-c)) ? "1" : "2")<<endl;
            }



    }





    return 0;
}
