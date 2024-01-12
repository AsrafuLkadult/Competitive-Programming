#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    char c;
    cin>>n>>m>>c;
    char matrix [n+1][m+1];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>matrix[i][j];
        }
    }
     int ans = 0;
     set<char>s;
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           if(matrix[i][j] == c)
           {
             if( 1<i and matrix[i-1][j] != c and matrix[i-1][j] !='.' and s.find(matrix[i-1][j]) ==s.end()){ans++;s.insert(matrix[i-1][j]);}
             if( 1<j and matrix[i][j-1] != c and matrix[i][j-1] !='.' and s.find(matrix[i][j-1]) ==s.end()){ans++;s.insert(matrix[i][j-1]);}
             if( i<n and matrix[i+1][j] != c and matrix[i+1][j] !='.' and s.find(matrix[i+1][j]) ==s.end()){ans++;s.insert(matrix[i+1][j]);}
             if( j<m and matrix[i][j+1] != c and matrix[i][j+1] !='.' and s.find(matrix[i][j+1]) ==s.end()){ans++;s.insert(matrix[i][j+1]);}
           }
        }
    }

    cout<<ans<<endl;

    return 0;
}
