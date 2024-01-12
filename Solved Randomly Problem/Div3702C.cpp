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

    int t;
    cin>>t;
    while(t--){

    ll n;
    cin>>n;
    double qv = pow(n,1/3.0); //for cube value determine
    ll cube = ll(ceil(qv));

    // use two pointer left side to right side....if value > n then right decrease 1 otherwise left decrease 1
    //if value equal to left + right cubic value then stop get desired result
    
    ll left = 1; 
    ll right =cube;
    bool ok=0;

    while(left <= right)
    {
        ll ans = (left*left*left)+(right*right*right);
        if(ans==n){ok=1;break;}
        if(ans>n)right--;
        if(ans<n)left++;
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
     }
     
   
         
           
    

    
    
    
    
   return 0;
}