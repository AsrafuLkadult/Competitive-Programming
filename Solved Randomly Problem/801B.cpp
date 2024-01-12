#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
        {
            int a,b;
                cin>>a>>b;
                int arr[a][b];
                for(int i=0;i<a;i++)
                {
                    for(int j=0;j<b;j++)
                    {
                        cin>>arr[i][j];

                    }

                }
              if(a==1 && b==1 )cout<<"1"<<endl;
              else{cout<<min((max(a,b)-1)*(max(a,b)-1),a*b)<<endl;}


        }


    return 0;
}

