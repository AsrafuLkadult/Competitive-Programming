#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// sub array sum exactly x 
//using just two pointer sliding window technique 
//array size must be greater or equal 2.
bool sub_array_sum_target_value (vector<ll>&array,ll target)
{

	ll left  = 0,right = 1,sum=array[left];

	while(left<right )
	{
		
		//cout<<sum<<endl;
		if(target ==  sum )return true;
	  else if(sum < target ){sum+=array[right];right++;}
		else if(sum > target ){sum-=array[left];left++;}
		  
    
	}
return false;

}

int main()
{
	ll size,target;
	cin>>size>>target;
	vector<ll>v(size);
	for(auto &it:v)cin>>it;
	cout<<sub_array_sum_target_value(v,target)<<endl;
	return 0;
}