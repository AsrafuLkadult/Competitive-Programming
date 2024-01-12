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
    int k;string s;
    cin>>k>>s;
    bool paici =0;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
      if(s[i] == '1' or s[i]=='4' or s[i]=='6' or s[i]=='8' or s[i]=='9'){paici=1;cout<<"1"<<endl<<s[i]<<endl;break;}
    }

    if(paici == 0)
    { 
      for(int i=0;i<s.size();i++)
      {
        
        if(s[i]=='2'){
          {
            for(int j=i+1;j<s.size();j++)
            {

              if(s[j]=='2'){cout<<"2"<<endl<<"22"<<endl;break;}
              else if(s[j]=='5'){cout<<"2"<<endl<<"25"<<endl;break;}
              else if(s[j]=='7'){cout<<"2"<<endl<<"27"<<endl;break;}

            }
          }
        }

        else if(s[i]=='3'){
          {
            for(int j=i+1;j<s.size();j++)
            {

              if(s[j]=='2'){cout<<"2"<<endl<<"32"<<endl;break;}
              else if(s[j]=='5'){cout<<"2"<<endl<<"35"<<endl;break;}
              else if(s[j]=='3'){cout<<"2"<<endl<<"33"<<endl;break;}

            }
          }  
        }
        else if(s[i]=='5'){
          {
            for(int j=i+1;j<s.size();j++)
            {

              if(s[j]=='2'){cout<<"2"<<endl<<"52"<<endl;break;}
              else if(s[j]=='5'){cout<<"2"<<endl<<"55"<<endl;break;}
              else if(s[j]=='7'){cout<<"2"<<endl<<"57"<<endl;break;}

            }
          }

       }
       else if(s[i]=='7'){
          {
            for(int j=i+1;j<s.size();j++)
            {

              if(s[j]=='2'){cout<<"2"<<endl<<"72"<<endl;break;}
              else if(s[j]=='5'){cout<<"2"<<endl<<"75"<<endl;break;}
              else if(s[j]=='7'){cout<<"2"<<endl<<"77"<<endl;break;}

            }
          }
    }
  }
}
}
  return 0;
  }

