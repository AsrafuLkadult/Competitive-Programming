#include<bits/stdc++.h>
using namespace std;
int main()
{


  int n,f;
  cin>>n>>f;
  vector<int>v(n);
  //long long unq=0;
  long long sum=0;
  for(int i=0;i<n;i++)
  {
      int ki,li;
      cin>>ki>>li;
      sum+=min(ki,li);
      v.push_back(min(2*ki,li)-min(ki,li));
  }

  sort(v.rbegin(),v.rend()); //dsecnding order e tader difference wise sajalam tarpor first f poriman add korbo sum er sathe
  sum = accumulate(v.begin(),v.begin()+f,sum);
  cout<<sum<<endl;
    return 0;
}
