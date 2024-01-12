#include <bits/stdc++.h>
using namespace std;

void Frequency(vector<long long > vec)
{

	map<long long , long long > M;
	for (long long  i = 0; vec[i]; i++) {

		if (M.find(vec[i]) == M.end()) {
			M[vec[i]] = 1;
		}
		else {
			M[vec[i]]++;
		}
	}
     bool f=0;
     long long  val ;
	for (auto& it : M) {
		   if(3<=it.second){val = it.first;
			f=1;break;
		   }

	}
	if(f==0){cout<<"-1"<<endl;}
	else cout<<val<<endl;

}

int main()
{
	int t;
	cin>>t;
	 while(t--)
     {
         long long  n,x;
         cin>>n;
        vector<long long > vec;
         for(long long  i=0;i<n;i++)
         {
             cin>>x;
             vec.push_back(x);
         }
	Frequency(vec);
     }
	return 0;
}
