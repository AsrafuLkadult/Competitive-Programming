#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<long long , long long>m;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            m[a]++;
        }
        bool b=0;
        for(auto u:m){
            if(u.second>=3){
                cout<<u.first<<endl;
                b=1;
                break;
            }
        }
        if(!b)cout<<-1<<endl;
    }
}
