#include <bits/stdc++.h>
using namespace std;

//string last;   //for globally declare
string decToBinary(int n)
{   
    string s="";
    // Size of an integer is assumed to be 32 bits
    for (int i = 22; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            s+="1";
        else
            s+="0";
    }
    return s;
}

int bitdiffcount (string s,string last, int k )
{
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != last[i])ans++;
    }
    
    
    ans = (ans<=k) ? 1:0;
    return ans;
}

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
    int n,m,k;
    cin>>n>>m>>k;
    vector<string>bin_str; //for binary string store all

    for(int i=0;i<m+1;i++)
    {
        int x;
        cin>>x;
        string str = decToBinary(x);
        bin_str.push_back(str);

    }
  
    string last = bin_str[m];
    
    int friendscount =0;
     for(int i=0;i<bin_str.size()-1;i++)
    {
      
      friendscount += bitdiffcount(bin_str[i],last,k);
      
       
    }

   cout<<friendscount<<endl;


 
    return 0;
}
