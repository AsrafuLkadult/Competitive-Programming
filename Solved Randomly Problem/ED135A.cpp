#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n,sum=0;
     cin>>n;
     vector<int>v(n);
     set<int>s;
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         s.insert(x);//sum+=(x%2);

     }

     if(s.size()==1 and n>=1)cout<<n<<endl;
     else
     cout<<s.size()<<endl;





 }





    return 0;
}

