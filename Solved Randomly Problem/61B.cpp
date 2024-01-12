//This problem solve mainly idea
//each problem for left and right side number find then answer determine

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,ans=0;
    cin>>n;
    vector<int>section(n);
    for(auto &it:section)cin>>it;

    for(int i=0;i<n;i++)
    {
        int cnt=0;
        int loop1element = section[i];
        int loop2element = section[i];
        for(int j=i-1;j>=0;j--)
        {
          if(section[j]>loop1element){break;}
            else {cnt++;loop1element=section[j];}
        }
        for(int k=i;k<n;k++)
        {
            if(section[k]>loop2element){break;}
            else {cnt++;loop2element=section[k];}
        }

        ans=max(ans,cnt);
    }

     cout<<ans<<endl;



    return 0;
}
