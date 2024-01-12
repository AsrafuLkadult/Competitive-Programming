#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
     string s;
     int n;
     cin>>n>>s;

     set<int>odd,even;
     if(n%2 !=0){

    for(int i=0;i<n;i++){odd.insert(s[i]);}
    if(odd.size()== n)cout<<n<<endl;
     else cout<<"1"<<endl;}
     else {


     int mid=n/2;
    int ans=0;
     for(int i=0;i<mid;i++){
      // cout<<s[mid-i-1]<<" "<<s[mid+i]<<endl;
     if(s[mid-i-1] == s[mid+i]){
         even.insert(s[mid+i]);
        if(even.size()<=1){ans++;
       }
       }
     }
    if(ans>0){
    cout<<ans*2<<endl;}
     else cout<<"1"<<endl;


}

     }



    return 0;
}
