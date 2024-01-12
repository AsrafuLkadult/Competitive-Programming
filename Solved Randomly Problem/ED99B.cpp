#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
      cin>>t;
       while(t--)
       {
            int x;
            cin>>x;
            int sum=0,cnt=0;
            for(int i=1;i<=x;i++)
            {
               sum+=i;
                cnt++;
               if(sum>=x){break;}
            }
            cout<<(sum==x+1)+cnt<<endl;
       }

    return 0;
}

