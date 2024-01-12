#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int>v(n);
       for(auto &it:v)cin>>it;
       map<int, int> mp;
       map<int, int>::reverse_iterator it;
       if(n%2==0){
        //reverse(v.begin(),v.end());
        for(int i=0;i<n;i+=2)
        {

            mp.insert({max(v[i],v[i+1]),min(v[i],v[i+1])});

        }

       for (it = mp.rbegin(); it != mp.rend(); it++) {
        cout<< it->first <<" "<< it->second<<" ";

       }cout<<endl;
       }
       else {
            int ans=v[0];
           v.erase(remove(v.begin(),v.end(),ans),v.end());
          for(int i=0;i<v.size();i+=2)
        {

            mp.insert({max(v[i],v[i+1]),min(v[i],v[i+1])});

        }

        for (it = mp.rbegin(); it != mp.rend(); it++) {
        cout<< it->first <<" "<< it->second<<" ";
       }cout<<ans<<endl;

       }
   }






    return 0;
}
