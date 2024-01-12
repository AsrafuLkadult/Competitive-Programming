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
    int a,b;
    cin>>a>>b;
    set<int>s;
    if(a==0 or b==0)cout<<"0"<<endl;
    else {

          if(a==b)cout<<max(a,b)<<endl;
          if((a==1 and b==2) or (b==1 and a==2))cout<<"3"<<endl;
          if((a==1 and b==3) or (b==1 and a==3))cout<<"3"<<endl;
          if((a==1 and b==4) or (b==1 and a==4))cout<<"5"<<endl;
          if((a==1 and b==5) or (b==1 and a==5))cout<<"5"<<endl;
          if((a==1 and b==6) or (b==1 and a==6))cout<<"7"<<endl;
          if((a==1 and b==7) or (b==1 and a==7))cout<<"7"<<endl;

          if((a==2 and b==3) or (b==2 and a==3))cout<<"3"<<endl;
          if((a==2 and b==4) or (b==2 and a==4))cout<<"6"<<endl;
          if((a==2 and b==5) or (b==2 and a==5))cout<<"7"<<endl;
          if((a==2 and b==6) or (b==2 and a==6))cout<<"6"<<endl;
          if((a==2 and b==7) or (b==2 and a==7))cout<<"7"<<endl;
         
          if((a==3 and b==4) or (b==3 and a==4))cout<<"7"<<endl;
          if((a==3 and b==5) or (b==3 and a==5))cout<<"7"<<endl;
          if((a==3 and b==6) or (b==3 and a==6))cout<<"7"<<endl;
          if((a==3 and b==7) or (b==3 and a==7))cout<<"7"<<endl;

           if((a==4 and b==5) or (b==4 and a==5))cout<<"5"<<endl;
          if((a==4 and b==6) or (b==4 and a==6))cout<<"6"<<endl;
          if((a==4 and b==7) or (b==4 and a==7))cout<<"7"<<endl;

          if((a==5 and b==6) or (b==5 and a==6))cout<<"7"<<endl;
          if((a==5 and b==7) or (b==5 and a==7))cout<<"7"<<endl;

          if((a==6 and b==7) or (b==6 and a==7))cout<<"7"<<endl;
          
          
          
          
            

         }

            
	return 0;

    

}
