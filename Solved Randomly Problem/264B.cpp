/////Solve idea Greedy method
//
//ami prothome 0 state er jonno pass korar jonno minimum v[0] poriman height lagbe keno nah state
//pass korte gele energy positive lagbe...tai minimum v[0] lagbe ...tarpor
//ami energy prottek differ er jonno check korci jodi positive ase tahole tu pass korbei
//ar nah hoy ami doller deya 1 baranur poriman joto negative energy ache ar ki...
//and thokon minimum energy 0 hoye jai...evabei solve korci...total doller hisab hoye geche..


#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k;

     cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){int x;cin>>x;v.push_back(x);}
    int zerostate = v[0];     //initially push first element for zerostate;
    int energy = 0; // v[0]-v[0] ==0 so initial move for must needed v[0] doller spent
    int doller  = v[0];
    for(int i=0;i<n-1;i++)
    {
        energy += (v[i]-v[i+1]);

        if(energy >=0){energy = energy;}
        else {
                doller+= abs(energy);
                energy =0;
             }

    }
   cout<<doller<<endl;

return 0;}
