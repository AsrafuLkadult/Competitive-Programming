#include<bits/stdc++.h>
using namespace std;
int main()

{

  long long n;
   cin>>n;
   vector<long long>v(pow(2,n));
   for(auto &it:v)cin>>it;
   vector<long long>cop(v.begin(),v.end());
   sort(cop.begin(),cop.end());
   long long maxx=*max_element(v.begin(),v.end());
   auto ran=find(v.begin(),v.end(),maxx);
   long long dis = distance(v.begin(),ran);

    if(dis==0 or dis == v.size()-1){

            if(dis==0){long long poss = *max_element(v.begin()+dis+1,v.end());
            cout<<distance(v.begin(),find(v.begin(),v.end(),poss))+1<<endl;}
            else {
                  long long poss = *max_element(v.begin(),v.begin()+dis-1);
                      cout<<distance(v.begin(),find(v.begin(),v.end(),poss))+1<<endl;

                 }
    }



    else
    {

           long long pos = *max_element(v.begin(),v.begin()+dis);
            long long neg = *max_element(v.begin()+dis+1,v.end());

            if((dis+1)%2==0)cout<<distance(v.begin(),find(v.begin(),v.end(),neg))+1<<endl;
            else cout<<distance(v.begin(),find(v.begin(),v.end(),pos))+1<<endl;

    }

    return 0;
}

