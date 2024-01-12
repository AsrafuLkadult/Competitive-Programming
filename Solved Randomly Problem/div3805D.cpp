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
int main()
{
	//int_code();
	int t;
	cin>>t;
	while(t--)
	{
       
       int p;string s,s1,result=""; //for result string store maximum letter

       cin>>s>>p;s1=s;
       sort(s.begin(),s.end());

       //cout<<(int(s[0])-97)+1<<endl;
       int sum=0;
       map<char, int> mp;  //for store each character how many times occur this string
       

       for (int i = 0; i < s.size(); ++i)
       {
        sum+=((int(s[i])-97)+1);
        if(sum <= p){mp[s[i]]++;}
        else 
            break;
       }
        string ans="";

      for(int i=0;i<s1.size();i++)
      {
        
        if(mp.find(s1[i]) != mp.end() && mp[s1[i]])
        {
           ans+=s1[i];
           mp[s1[i]]--;
        }

      }
      
       cout<<ans<<endl;
    }
      
return 0;

}
