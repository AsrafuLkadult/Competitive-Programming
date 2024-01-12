#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,s ="abcdefghijklmnopqrstuvwxyz";
        cin>>str;
        set<int>st(str.begin(),str.end());

        map<char,vector<int> >mp;


        for(int i=0;i<str.size();i++)
        {
            mp[str[i]].push_back(i+1);
        }
         sort(str.begin(),str.end());
         int cost = 0;
         for(int ind =0;ind<(str.size()&1 ? str.size()-2:str.size()-1);ind++)
         {
              int index = distance(s.begin(),find(s.begin(),s.end(),str[ind]));index++;
              int index2 = distance(s.begin(),find(s.begin(),s.end(),str[ind+1]));index2++;
              //cout<<index<<" "<<index2<<endl;
             cost += abs(index-index2);
         }

         vector<int>sequence;
         cout<<cost<<" "<<(st.size()==1 ? str.size() :(str.size()-(str.size()%2)))<<endl;
        int pr   =0;   //for pair odd for n-1/2 even for n/2;


        for(auto it:mp)
        {

            for(int k=0;k<it.second.size() && pr<(str.size()-(str.size()%2));k++)
            {

                pr++;
                sequence.push_back(it.second[k]);

            }
        }

        vector< pair<int,int> > sq;

    //for(auto it:sequence)cout<<it<< "" ;
            for(int m=1;m<sequence.size();m+=2)
            {
               sq.push_back({sequence[m-1],sequence[m]});
              //cout<<sequence[m-1]<< " " <<sequence[m]<<endl;
           }

       // sort(sq.begin(),sq.end());

        //map<int,int>answer;
        int frst ,scond,third,fourth;
       for(int j=0;j<sq.size();j++)
        {


            if(sq[j].first == 1 or sq[j].second==1)
            {
                frst = min(sq[j].first,sq[j].second);
                scond = max(sq[j].first,sq[j].second);

            }
            else if(sq[j].first == str.size() or sq[j].second==str.size())
            {
                fourth = max(sq[j].first,sq[j].second);
                third = min(sq[j].first,sq[j].second);

            }
            else continue;
           //if(sq[j].first > sq[j].second) swap(sq[j].second,sq[j].first);

        }

        if(st.size()==1)
        {
            for(int i=1;i<=str.length();i++)
                cout<<i<<" ";
            cout<<endl;
        }
        else
        {

            cout<<frst<<" "<<scond<<" ";
        for(auto it:sq)
        {   if(it.first == frst || it.first == scond || it.first == third || it.first == fourth
               or it.second == frst || it.second == scond || it.second == third || it.second == fourth)
            {
                continue;
            }
            else

                {
                    cout<<it.first<<" "<<it.second<<" ";
                }
        }

         if(frst != third and scond != fourth)
        cout<<third<<" "<<fourth;
        cout<<endl;
        }


    }





    return 0;
}

