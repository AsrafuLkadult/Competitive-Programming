#include<iostream>
#include<string>
#include<algorithm>
 using namespace std;
 int main()
 {

    int n;
   cin>>n;
    long long cnt=0;
     for(int i=1;i<=n;i++)
     {

           int k=i,d=i;bool ff=0;
              while(k!=0)
              {
                  if(k%10==7){ff=1;break;}
                  k/=10;
              }
            if(ff==1 and d%8==7)cnt++;
            else if(ff==0 and d%8==7)cnt++;
            else if(ff==1 and d%8!=7)cnt++;

     }
    cout<<n-cnt<<endl;

     return 0;
 }



