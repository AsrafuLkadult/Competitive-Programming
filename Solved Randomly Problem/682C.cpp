#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n,m;
   cin>>n>>m;
    int a[n][m];
    set<int>v;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<m;j++)
          {

               cin>>a[i][j];
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<m;j++)
          {

              if(v.find(a[i][j])==v.end())
              {
                   cout<<a[i][j]<<" ";
                   v.insert(a[i][j]);

              }
              else
              {    int kk=a[i][j];
                   while(v.find(a[i][j])!=v.end()){
                        kk++;}
                   cout<<kk<<" ";
                   v.insert(kk);


              }

          }
          cout<<endl;


     }




    return 0;
}

