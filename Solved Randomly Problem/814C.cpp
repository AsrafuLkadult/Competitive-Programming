#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  int n,q;cin>>n>>q;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  while(q--)
  {
      int position,round;
      cin>>position>>round;
      int pairr = (position+1 )/2;
      int pos = distance(v.begin(),find(v.begin(),v.end(),*max_element(v.begin(),v.end())))+1;
      //cout<<pos<<" "<<position<<endl;

      if(pos < position)cout<<"0"<<endl;
      else if (pos == position and position%2==0 )
      {
          cout<<round - pairr<<endl;
      }

      else if (pos == position and position%2 == 1 )
      {
          cout<<round - pairr+1<<endl;
      }

      else
      {
          int ans = 0;
          for(int i=position;i<n-1;i++)
          {
              if(v[i]<v[i+1])break;
              else ans++;
          }
          cout<<min(ans,round)<<endl;

      }


  }
            }
    return 0;
}
