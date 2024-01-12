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
   FAST_IO();

     int t;
     cin>>t;
     while(t--){

     	          ll n;
     	          cin>>n;
     	          vector<ll>v(n);
     	          for(auto &it:v)cin>>it;
     	          	ll i=0,j=n-1;
     	          ll left_sum=0,right_sum=0,answer=0;


     	          while(i<j)
     	          { 
                  left_sum+=v[i]; 
                  right_sum+=v[i];
     	          	if(left_sum == right_sum)
     	          		{answer=(i+1)+(n-j+1);break;}
     	          	if(left_sum<right_sum)
     	          		 {
     	          		 	i++;
     	          		 	
     	          		 }
     	          	if(left_sum>right_sum)
     	          		 {
     	          		 	j--;
     	          		 	
     	          		 }	 

     	          }
     	          cout<<answer<<endl;

		           
	      
		         }

				

			 

   return 0;
}
