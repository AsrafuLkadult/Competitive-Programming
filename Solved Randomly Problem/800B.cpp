#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        int k;
        string s,s1;
        cin>>k>>s;
        s1=s;
        int n=s.size();
        int srt=0,dsrt=0;
        if(n%2 !=0)n--;

        for(int i=0;i<n;i+=2){
           // cout<<s[i]<<" "<<s[i+1]<<endl;
           if((s[i]=='0' && s[i+1]=='1') || (s[i]=='1' && s[i+1]=='0'))srt++;
        }
            reverse(s1.begin(),s1.end());
           for(int i=0;i<n;i+=2){
           // cout<<s[i]<<" "<<s[i+1]<<endl;
           if((s1[i]=='0' && s1[i+1]=='1') || (s1[i]=='1' && s1[i+1]=='0'))dsrt++;
        }

        if(k==1 || k==2 || k==3)
        {
            if(srt!=0 or dsrt!=0){cout<<k+1<<endl;}
            else cout<<k<<endl;
        }
        else
        cout<<max(srt,dsrt)*2 + s.size()<<endl;



    }





    return 0;
}
