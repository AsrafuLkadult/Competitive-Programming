#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--){

    int n,k;
    cin>>n>>k;
    vector<int>v(k);

    for(int i=0;i<n;i++)
    {
        int x;

        cin>>x;

        v[(i+1)%k] = max(v[(i+1)%k],x);

    }

    long long sum=0;
    for(auto it:v)sum+=it;

    cout<<sum<<endl;
}


    return 0;
}
