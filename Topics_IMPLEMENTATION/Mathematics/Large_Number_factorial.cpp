/*/*This technique based on old school multiplication system.
Each stage carry based calculation pretty simple.*/
Time Complexity: O(N log (N!)), where O(N) is for loop and O(log N!) is for nested while loop
Auxiliary Space: O(max(digits in factorial))*/

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
//multiply part based on old school technique
void multiply(ll x,vector<ll>&v)
{
     ll carry=0; //initialize carry is zero
     
/*     vector store digit is reverse order because carry add for extra digit not add front in vector.
     so we need reverse order vector result.*/
     for(ll i=0;i<v.size();i++)
     {
        ll mul = ((x*v[i])+carry);
        //store last digit others is carry
        v[i]=(mul%10);
        //carry findout 
        carry=(mul/10);
     }
     //if carry exist then all store vector
     while(carry)
     {
       v.push_back(carry%10);
       carry/=10;
     }

}

//for factorial part
void factorial(ll n)
{
    vector<ll> v; // for store result for factorial
    v.push_back(1);//Initialize the answer is 1;

    for(ll i=2;i<=n;i++)
    {
        multiply(i,v);
    }

    for(ll i=v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
    cout<<endl;
}

int main()
{
   int_code();
   ll n;
   cin>>n;
   factorial(n);
    return 0;
}
