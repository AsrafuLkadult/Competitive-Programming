#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n;
    cin>>n;
    vector<int>v(n);

    for(auto it:v)cin>>it;
    int cnt=0,cnt1=0,pos,pos1;
    int first=v[0],last=v[n-1],ff=v[0],ll=v[n-1];
    for(int i=0;i<n;i++)
    {
         if(first>v[i]){pos=i;break;}
        else if(first<=v[i]){first=v[i];cnt++;}

    }
    for(int j=n-1;j>=pos;j--)
    {
        if(last>v[j]){break;}
        else if(last<=v[j]){last=v[j];cnt++;}
    }
     for(int j=n-1;j>=0;j--)
         {
        if(ll>v[j]){pos1=j;break;}
        else if(ll<=v[j]){ll=v[j];cnt1++;}
    }
     for(int i=0;i<pos1+1;i++)
    {
         if(ff>v[i]){break;}
       else  if(ff<=v[i]){ff=v[i];cnt1++;}

    }
    cout<<max(cnt,cnt1)<<endl;





    return 0;
}

