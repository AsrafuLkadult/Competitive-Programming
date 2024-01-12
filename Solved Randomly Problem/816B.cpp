
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
        while(t--){

            long long n,k,b,s;
            cin>>n>>k>>b>>s;
            long long bk= b*k;  //for check 
            long long kb = k*b;
            bool f=0;
            long long baki = s-kb;
            
            if(baki < k ){kb+=baki;baki=0;}
            if(baki>=k){kb+=(k-1); baki-=(k-1);}

            if( (bk > s) || ((k-1)*(n-1) < baki)) cout<<"-1"<<endl;

            else 
            {
                cout<<kb<<" ";
                for(int i=0;i<n-1;i++)
                {
                    if(baki>0){
                    cout<<min(baki,k-1)<<" ";baki-=min(k-1,baki);}
                    else 
                    {
                        cout<<"0 ";

                    }
                }
                cout<<"\n"<<endl;

            }

        }



    return 0;
}
