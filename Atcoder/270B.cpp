#include <bits/stdc++.h>
using namespace std;

void int_code()
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif

}
int main()
{
    //int_code();
    
    int x,y,z;
    cin>>x>>y>>z;

    if(x<z)cout<<"-1"<<endl;
    else 
    {


    cout<<abs((y-z)/10)*x<<endl;


    }

            
    return 0;

    

}
