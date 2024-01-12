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
typedef long long ll;

int main()
{      
     int_code();
     
     map<char,int>letter;
     vector<char>conv(26);
     for(int i=0;i<26;i++)
     {
        letter.insert({char('A'+i),i});
        conv[i]=char('A'+i);
     }
    // for(auto it:letter)cout<<it.first<<" "<<it.second<<endl;
     string plaintext;
     vector<vector<int> >matrix{{3,3},{2,5}};
     int det = ((matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]));
        cout<<det<<endl;
       matrix[0][1]= -matrix[0][1];
       matrix[1][0] = -matrix[1][0];
     swap(matrix[1][1],matrix[0][0]);
     for(int i=0;i<matrix.size();i++)
     {
        for(int j=0;j<matrix[i].size();j++)
        {
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
     }
     
      int rem=0,i;
     for( i=1;i<=26;i++)
     {
        det = det*i;
        if(det%26 == 1){break;}
        
     }
     cout<<i<<endl;

        

  
    
    
    

    return 0;}


