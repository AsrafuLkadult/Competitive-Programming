#include<bits/stdc++.h>
using namespace std;
void subArray(int arr[], int n)
{

    for (int i=0; i <n; i++)
    {

        for (int j=i; j<n; j++)
        {

            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";

            cout << endl;
        }
    }
}

// Driver program
int main()
{
    int t;
     cin>>t;
      while(t--){
            int n;
            cin>>n;
            int arr[n];
            vector<long long>v;
            map<int,int>mp;
            for(int i=0;i<n;i++){cin>>arr[i];v.push_back(arr[i]);
            mp[arr[i]]++;}
            int f=0,kk=0;
            for(auto it:mp)
            {
                 if(it.second>=2){f=1;}

            }




    for (int i=0; i <n; i++)
    {

        for (int j=i; j<n; j++)
        {
            long long sum=0,len=0;
            for (int k=i; k<=j; k++)
                {

                    sum+=arr[k];
                    len++;
                }
                if(count(v.begin(),v.end(),sum)!=0 and len!=1){kk=1;}
                else v.push_back(sum);
        }
    }
    if(kk==1 or f==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
      }


    return 0;
}
