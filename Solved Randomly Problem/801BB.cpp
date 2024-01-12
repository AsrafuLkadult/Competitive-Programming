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
        int n;
        cin>>n;
        std::vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        if(n&1)
            {cout<<"Mike"<<endl;continue;}
        
          int smallest = 0;
          for(int i=0;i<n;i++){

            if(v[i]<v[smallest])
                smallest=i;
                             }

            if(smallest & 1)cout<<"Mike\n";
            else cout<<"Joe\n";                   



    }
      

      
	return 0;

    

}
