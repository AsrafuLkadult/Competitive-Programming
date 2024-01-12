#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
       arr.push_back(i+1);
    }
    if(n==1)cout<<"1"<<endl;
    else {
    if(n&1){
        arr.erase(arr.begin());
    }
    for(int i=0;i<arr.size()-1;i+=2)
        swap(arr[i],arr[i+1]);
        if(n%2==0){
    for(auto value:arr)cout<<value<<" ";
        }
        else
        {   cout<<"1"<<" ";
            for(auto value:arr)cout<<value<<" ";
        }
        cout<<endl;
   }
   }
    return 0;
}

