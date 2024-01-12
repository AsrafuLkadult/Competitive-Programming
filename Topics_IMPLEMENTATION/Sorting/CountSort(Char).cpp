#include <bits/stdc++.h>
using namespace std;
//---------Time complexity Big O(string.size()*26)-------
//---------Space Complexity Big O(26)-------------

void countSort(string s)
{
        
       vector<int>freq(26);
       for(char c:s)freq[c-'a']++;
       for(int i=1;i<freq.size();i++)freq[i]=freq[i]+freq[i-1];
       vector<int>output(26);  
       for(int i=s.size()-1;i>=0;i--)
       {
        output[--freq[s[i]-'a']]=s[i]-'a';
       }
       for(int i=0;i<s.size();i++)
       cout<<char (output[i]+'a')<<endl;
}

int main() {

       
       string s="badc";
       countSort(s);

    return 0;
}