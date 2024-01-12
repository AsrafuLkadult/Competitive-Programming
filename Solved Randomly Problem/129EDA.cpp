#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
     cin>>t;
     while(t--){
   int n,m;
   vector<int>alice,bob;
   cin>>n;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    alice.push_back(x);

   }
   cin>>m;
   for(int i=0;i<m;i++){
    int x;
    cin>>x;
    bob.push_back(x);
   }

   if(*max_element(alice.begin(),alice.end()) > *max_element(bob.begin(),bob.end()))
    cout<<"Alice"<<endl<<"Alice"<<endl;
   else if(*max_element(alice.begin(),alice.end()) < *max_element(bob.begin(),bob.end()))
    cout<<"Bob"<<endl<<"Bob"<<endl;
    else cout<<"Alice"<<endl<<"Bob"<<endl;

     }




    return 0;
}
