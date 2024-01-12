#include <bits/stdc++.h>
using namespace std;
void int_code()
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif

}

 
typedef long long ll;
int main()
{      
     int_code();
     ll n,m,x;
     cin>>n>>m>>x;
     vector<vector<char> > v( n , vector<char>(m)); 
     bool f=0;// shift button ache ki nai
     vector<pair<ll,ll> >position;

     for(ll i=0;i<n;i++)
     {  
        for(ll j=0;j<m;j++)
        {   
             cin>>v[i][j];
             if(v[i][j] =='S')
             {
               position.push_back({i+1,j+1});
               f=1;
             }
        }

     }

     map<char,ll>mp;

        for(ll i=0;i<n;i++)
     {  
        for(ll j=0;j<m;j++)
        {   
             
             if(v[i][j] !='S')
             {   
                mp[toupper(v[i][j])]=1000;
                ll edis=1000000000000; //for euclid distance 
                for(ll k=0;k<position.size();k++)
                {
                     ll xx = abs(position[k].first-(i+1)); //for vuj
                     ll yy = abs(position[k].second-(j+1)); // for otivuj

                     edis = min(edis,(xx*xx)+(yy*yy)); // for formula
                }
               
              
              mp[toupper(v[i][j])]=min(edis,mp[toupper(v[i][j])]);
             
             }
        }

     }
      
      ll text_length;
      ll dis= x*x;
      cin>>text_length;
      string str;
      cin>>str;
     bool fd = any_of(str.begin(), str.end(),[](char c){return (c>='A' && c<='Z');});

     if(fd==1 and position.size()==0)cout<<"-1"<<endl;
     else 
     {
       bool it=false; 
       for(ll i=0;i<str.size();i++)
       {
             
            if(islower(str[i])){
            if((mp.find(toupper(str[i]))==mp.end()))
            {   
                it=true;break;
            } }

            else 
            {
               if((mp.find(str[i])==mp.end()))
            {   
                it=true;break;
            }
             
            }
                   

       }
       if(it == true)cout<<"-1"<<endl;

       else 
       { 
         ll ans=0; //for otherhand use 
         vector<char>fnd;
        for(ll i=0;i<str.size();i++)
       { 

         if(isupper(str[i]) )
         {
            if((mp[str[i]] > dis))
                {ans++;}
         }
         

       }
       cout<<ans<<endl;
       
       }
     }


    return 0;}


