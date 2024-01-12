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
   
        string s;
        ll nb,ns,nc,pb,ps,pc,r;
        cin>>s;
        cin>>nb>>ns>>nc;
        cin>>pb>>ps>>pc;
        cin>>r;
        map<char,ll>mp;
        for(ll i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        //for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
       /* ll f1 = nb/mp['B'];
        ll f2 = nc/mp['C'];
        ll f3 = ns/mp['S'];
        ll mn = min({f1,f2,f3});*/
        ll fb = mp['B'];
        ll fc = mp['C'];
        ll fs = mp['S'];
        ll ans=0;
        while(1)
        {

            if(nb<fb)
            {
                ll dorkar = fb-nb;
               if(r>=(dorkar*pb))
               {
                nb=fb;
                r-=(dorkar*pb);

               }
               else 
                 {
                    break;
                 }
            }
             if(nc<fc)
            {
                ll dorkar = fc-nc;
               if(r>=(dorkar*pc))
               {
                nc=fc;
                r-=(dorkar*pc);

               }
               else 
                 {
                    break;
                 }
            }
             if(ns<fs)
            {
                ll dorkar = fs-ns;
               if(r>=(dorkar*ps))
               {
                ns=fs;
                r-=(dorkar*ps);

               }
               else 
                 {
                    break;
                 }
            }
            if(nb>=fb and nc>=fc and ns>=fs)
            {
                ans++;
                nb-=fb;
                nc-=fc;
                ns-=fs;
            }

        }

    return 0;
          
}

