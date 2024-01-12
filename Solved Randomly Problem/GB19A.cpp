
#include <bits/stdc++.h>
using namespace std;

int main()
{

      int t;
       cin>>t;
        while(t--){

                int n;
        cin>>n;
        vector<int>v(n);
        set<int>s;
        for(auto &it:v)cin>>it;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
            s.insert((v[j]- v[i]));}
        }
        cout<<s.size()<<endl;

        }
	return 0;
}
