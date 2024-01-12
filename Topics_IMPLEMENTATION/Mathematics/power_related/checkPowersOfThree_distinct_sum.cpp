/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  // 1e7 porjonto n er value leetcode;
 bool checkPowersOfThree( int n) {
        
       
  vector<int>v(16);
	for(int i=15;i>=0;i--)
	{
		int ans = pow(3,i);
		if(ans<=n)
		{
			n-=ans;
		}
		
	}
  if(n)return false;
	else return true;


        
    }

int main()
{ 

	cout<<checkPowersOfThree(21)<<endl;

   






	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  // 1e7 porjonto n er value leetcode;
 bool checkPowersOfThree( int n) {
        
       
  vector<int>v(16);
	for(int i=0;i<16;i++)
	{
		v[i] = pow(3,i);
	}
	set<int>s;
 
	while(n!=0)
	{
		if(binary_search(v.begin(), v.end(),n))
		{
		 if(s.find(n)==s.end())
		 {
		 	s.insert(n);
		 	n-=n;
		 }
		 else
		 {
		 	break;
		 }
		}
		else 
		{
			auto it = upper_bound(v.begin(), v.end(),n);it--;
			if(s.find(v[it-v.begin()]) == s.end())
			{
				s.insert(v[it-v.begin()]);
				n-=v[it-v.begin()];
			}
			else 
			{
				break;
			}

		}


	}

	if(n)return false;
	else return true;


        
    }

int main()
{ 

	cout<<checkPowersOfThree(5)<<endl;

   






	return 0;
}