#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;cin>>t;  while(t--){


        long long n;
        cin>>n;
        set<long long>s;
        for(long long i=1;i<=n;i++)


        {

            if(i*i <=n )s.insert(i*i);
            if(i*i*i <=n)s.insert(i*i*i);

        }
        cout<<s.size()<<endl;



        }




return 0;
}
