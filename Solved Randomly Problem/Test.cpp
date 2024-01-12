#include<bits/stdc++.h>
using namespace std;
int main()
{

   list<long long>first,last;

     long long n,x;
      cin>>n;
      cin>>x;
      first.push_front(0);
      last.push_front(x);
       n--;

    //  cout<<first.front()<<" "<<last.back()<<endl;
      for(int i=0;i<n/2;i++)
      {
          long long var;
          cin>>var;
          long long df=abs(var-last.front());

             if(var>last.front())
             {
                 if(df<first.front()){first.push_front(first.front());last.push_front(var-first.front());}
                 else
                 {
                 first.push_front(df);
                 last.push_front(last.front());
                 }

            }
            else
            {
                first.push_front(first.front());
                last.push_front(var-first.front());
            }

      }

        first.reverse();
       for(auto it:first)cout<<it<<" " ;
       for(auto it1:last)cout<<it1<<" ";


    return 0;
}
