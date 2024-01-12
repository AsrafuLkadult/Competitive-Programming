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
	//int_code();
    int t;
    cin>>t;
    while(t--)
    {
      int x;
      cin>>x;

      for(int i=1;i<=x;i++)
      {
        
        for(int j=1;j<=i;j++)
        {
            if(j==1 or j==(i))cout<<"1 ";
            else 
                cout<<"0 ";
        }   
        cout<<"\n";
      }


    }

   
  


    return 0;
}
