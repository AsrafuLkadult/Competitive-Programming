
#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
     cin>>t;
      while(t--){
            int n;
            cin>>n;
            int arr[n];

            for(int i=0;i<n;i++)cin>>arr[i];
int k =0;
int res = 0;

for (int i = 0; i < n; i++)
{
	int sum = 0;
	for (int j = i; j < n; j++)
	{
	// Calculate required sum
	sum += arr[j];
	if (sum == k){
		res++;
		k=sum;
	}
	else k=sum;
	}
}
if(res>=2)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}}

// This code is contributed by Chitranayal
