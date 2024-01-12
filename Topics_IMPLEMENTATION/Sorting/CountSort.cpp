#include <bits/stdc++.h>
using namespace std;

/*
1. Counting sort is efficient if the range of input data 
is not significantly greater than the number of objects
to be sorted. Consider the situation where the input sequence
is between the range 1 to 10K and the data is 10, 5, 10K, 5K.

2. Stable [First element first position for multiple time occurances] 

---------Time complexity Big O(arr.size()*arr_max_value)-------
---------Space Complexity Big O(arr_max_value)-------------*/

void countSort(vector<int>&arr)
{
       int val = *max_element(arr.begin(),arr.end()); 
       vector<int>freq(val+1);
       for(auto it:arr)freq[it]++;
       for(int i=1;i<freq.size();i++)freq[i]=freq[i]+freq[i-1];
       vector<int>output(arr.size());
       
       for(int i=arr.size()-1;i>=0;i--)
       {
        output[--freq[arr[i]]]=arr[i];
       }
       for(auto it:output)cout<<it<<" ";
}

int main() {

       
       vector<int> arr={1,2,0,1,2,4,3,2,1,0,5};
       countSort(arr);

    return 0;
}