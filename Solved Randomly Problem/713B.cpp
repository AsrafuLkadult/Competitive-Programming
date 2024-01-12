#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
     while(t--){
  int n;
   cin>>n;
   char a[n][n];
    vector<int>rw,col;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
              rw.push_back(i);
              col.push_back(j);
            }
        }

    }
    if(col[0]==col[1])
    {
       if(col[0]==0)
       {
           int f=rw[0];
           int d=rw[1];
         a[f][1]='*';
         a[d][1]='*';
           for(int i=0;i<n;i++)
          {
        for(int j=0;j<n;j++)
        {


             cout<<a[i][j];

        }
        cout<<endl;

    }

       }
       else if(col[0]==n-1)
       {
           int f=rw[0];
           int d=rw[1];
         a[f][0]='*';
         a[d][0]='*';
           for(int i=0;i<n;i++)
          {
        for(int j=0;j<n;j++)
        {


             cout<<a[i][j];

        }
        cout<<endl;

    }

       }
       else
       {
           int f=rw[0];
           int d=rw[1];
         a[f][0]='*';
         a[d][0]='*';
           for(int i=0;i<n;i++)
          {
        for(int j=0;j<n;j++)
        {


             cout<<a[i][j];

        }
        cout<<endl;

    }

       }



    }
     else if(rw[0]==rw[1])
    {
       if(rw[0]==0)
       {
           int f=col[0];
           int d=col[1];
         a[1][f]='*';
         a[1][d]='*';
           for(int i=0;i<n;i++)
          {
        for(int j=0;j<n;j++)
        {


             cout<<a[i][j];

        }
        cout<<endl;

    }

       }
       else if(rw[0]==n-1)
       {
           int f=col[0];
           int d=col[1];
         a[0][f]='*';
         a[0][d]='*';
           for(int i=0;i<n;i++)
          {
        for(int j=0;j<n;j++)
        {


             cout<<a[i][j];

        }
        cout<<endl;

    }

       }
        else
       {
           int f=col[0];
           int d=col[1];
         a[0][f]='*';
         a[0][d]='*';
           for(int i=0;i<n;i++)
          {
        for(int j=0;j<n;j++)
        {


             cout<<a[i][j];

        }
        cout<<endl;

    }

       }



    }
    else

    {
        int c1=col[0];
        int c2=col[1];
        int r1=rw[0];
        int r2=rw[1];
        a[r1][c2]='*';
        a[r2][c1]='*';

        for(int i=0;i<n;i++)
          {
        for(int j=0;j<n;j++)
        {


             cout<<a[i][j];

        }
        cout<<endl;

    }






    }


     }




    return 0;
}
