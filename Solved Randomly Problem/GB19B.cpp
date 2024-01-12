
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int kkh;
     cin>>kkh;
      while(kkh--){
    int n;
    cin>>n;

    set<int>s;
    while(n--)
    {
        int x;
        cin>>x;
        if(s.find(x)==s.end())
        {
            s.insert(x);

        }
        else s.insert(x+1);
    }

    cout<<s.size()<<endl;
}

    return 0;
}
