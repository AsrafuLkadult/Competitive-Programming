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
    int_code();
  

     int t;
     cin>>t;
     while(t--)
     {
       int n;
       cin>>n;
       set<int>s;
       for(int i=0;i<n;i++)
       {
        int x;
        cin>>x;
        s.insert(x);
       }

       if(s.size()==2)cout<<"0"<<endl;
       else 
       {
        cout<<s.size()<<endl;
       }




     }
    return 0;

    

}
