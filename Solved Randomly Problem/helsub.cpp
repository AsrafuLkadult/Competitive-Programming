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
	int_code(); 
	 
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	int n,k;
	 	cin>>n>>k;
	 	std::vector<int> A,B;
	 	//for(auto &it:v)cin>>it;
	 	//sort(v.begin(), v.end());
	 	for(auto i=1,j=n;i<=n,j>=1;i++,j--)
	 	{
           A.push_back(i);B.push_back(j);
	 		
	 	}
	 	//for(auto i=0;i<n;i++)cout<<A[i]<<" ";cout<<endl;
	    //for(auto i=0;i<n;i++)cout<<B[i]<<" ";cout<<endl;
	    if(n%2==0)cout<<k%(n+1)<<endl;
	    else 
	    	{     
	    		int mid = (n/2)+1;
	    		if(k<mid)cout<<k<<endl;
	    		else 
	    		{
                  int p=1,ax=1,bx=5;
                 while(p<=k)
                 {
                 	
                      cout<<ax<<" "<<bx<<endl;
                      if(ax>n)ax=1;
                      if(bx<1)bx=5;
                      if(ax==bx){ax++;}
                      ax++;bx--;
                      p++;

                 }                 

	    		}
	    		
	    		//cout<<((k+2+(((k+2)/n)*2)-1)%n)<<endl;	
	    	} 	
     }
	 
	return 0;
}
