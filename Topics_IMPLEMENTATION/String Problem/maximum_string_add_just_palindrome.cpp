#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//for fast input output like c print and scanf 
void FAST_IO()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

//vector display 

void show(std::vector<ll>&v)
{
	for(ll i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
   
      ll n,m;
      cin>>n>>m;
      set<string>st;
      string ans="",same="";
      for(ll i=0;i<n;i++)
      {
      	string s,s1;
      	cin>>s;
      	s1=s;
        //ll cn = count(s.begin(),s.end(),s[0]);
        
      	reverse(s1.begin(), s1.end());
        if(s1==s){same= s;}
      	if(st.find(s1) != st.end())
      	{
      		ans+=s1;  		
      	}
      	else 
      	{
          st.insert(s);
      	}

      }
      string fn = ans;
       reverse(ans.begin(),ans.end());
      cout<<ans.size()+fn.size()+same.size()<<endl<<fn<<same<<ans<<endl;


    
  
  
  
  
    return 0;
}
