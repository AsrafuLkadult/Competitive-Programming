#include<bits/stdc++.h>
using namespace std;

bool chk(string string1)
{
    int i, length;
    int flag = 0;
    length =string1.length();

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
        return false;
    }
    else {
       return true;
    }
}
int main()
{

      int t;
      cin>>t;
       while(t--){
     int n,k,ans;
      cin>>n>>k;
      string s;
       cin>>s;
       ans=(n+1)/2;
      if((chk(s)==1 and k<=ans)or k==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
       }

    return 0;
}

