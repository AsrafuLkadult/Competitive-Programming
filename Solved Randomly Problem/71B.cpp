#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s[3] ={"Carrots","Kiwis","Grapes"};
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    int waste[k];
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        waste[i]=((a-1)*m +b-1);
    }
    sort(waste,waste+k);
   //for(auto it:waste)cout<<it<<endl;
   for(int i=0;i<t;i++)
   {
       int a,b;
       cin>>a>>b;

       int I =b+(a-1)*m-1;
       auto it = lower_bound(waste,waste+k,I);
       auto J = (it-waste);
       if(*it == I)
       {cout<<"Waste"<<endl;continue;}
       else
       {

           cout<<s[(I-J)%3]<<endl;
       }

   }

    return 0;
}
