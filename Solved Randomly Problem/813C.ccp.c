#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>even,odd;
    for(int i=1;i<=n;i++){
        if(i&1)odd.push_back(i);
        else even.push_back(i);
    }
    //reverse(even.begin(),even.end());
    int f=odd[0];
      if(n%2!=0)  {
    auto it = odd.begin();
    odd.erase(it);}
    if(n%2!=0){cout<<f<<" ";
    for(int i=0;i<min(even.size(),odd.size());i++)
        cout<<odd[i]<<" "<<even[i]<<" ";
         cout<<endl;
   }
   else
   {
        for(int i=0;i<min(even.size(),odd.size());i++)
        cout<<even[i]<<" "<<odd[i]<<" ";
         cout<<endl;
   }
   }





    return 0;
}

