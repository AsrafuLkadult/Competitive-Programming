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

int main(){
    int_code();
    int T, N;
    cin>>T;
    string s;
    while(T--){
        cin >> N >> s;
        long long ans = 0;
        for(int i=1; i<=N; i++)
            for(int j=i; j<=N; j+=i){
                if(s[j-1] == '1')
                    break;
                if(s[j-1] == '0')
                    ans += i;
                s[j-1] = '5';
            }
        cout << ans << endl;
    }

    return 0;
}
