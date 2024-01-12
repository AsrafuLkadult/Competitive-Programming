// c++ program to Count number of ways we
// can get palindrome string from a given
// string
#include<bits/stdc++.h>
using namespace std;

// function to find the substring of the
// string
string substring(string s,int a,int b)
{
	string s1="";

	// extract the specified poition of
	// the string
	for(int i = a; i < b; i++)
		s1 = s1 + s[i];

	return s1;
}

// can get palindrome string from a
// given string
vector<string> allPalindromeSubstring(string s)
{
	vector<string> v ;

	// moving the pivot from starting till
	// end of the string
	for (float pivot = 0; pivot < s.length();
								pivot += .5)
	{

		// set radius to the first nearest
		// element on left and right
		float palindromeRadius = pivot -
								(int)pivot;

		// if the position needs to be
		// compared has an element and the
		// characters at left and right
		// matches
		while ((pivot + palindromeRadius)
		< s.length() && (pivot - palindromeRadius)
		>= 0 && s[((int)(pivot - palindromeRadius))]
			== s[((int)(pivot + palindromeRadius))])
		{

			v.push_back(substring(s,(int)(pivot -
					palindromeRadius), (int)(pivot
						+ palindromeRadius + 1)));

			palindromeRadius++;
		}
	}

	return v;
}

int main()
{
      int t;
       cin>>t;
        while(t--){
	vector <string> v ;
	        string s;
	      cin>>s;
	      set<char>(s.begin(),s.end());
				v=allPalindromeSubstring(s);
				cout<<v.size()-s.size()<<endl;
        }



}

