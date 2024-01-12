#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n,s;
    cin>>n;
    vector<int>st;
     cin>>s;
     if(s==0)st.push_back(s);
     else st.push_back(s+1);
    for(int i=0;i<n-1;i++)
    {
        int x,d;
         cin>>x;
         if(st[st.size()-1]==(x+1)){st.push_back(x);
         }
        else {st.push_back(x+1);}


    }
   for(auto it:st)cout<<it;






    return 0;
}

