#include <bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0,right = nums.size();
        vector<int>ans;
        while(left <= right)
        {
            int sum = nums[left]+nums[right];
            if(sum == target){ans.push_back(left);ans.push_back(right);break;}
            else if(target < sum){right--;}
            else if(target > sum){left++;}
        }
        return ans;
    }
int main() {
        vector<int>nums={2,7,11,15};int target = 9;
         int left = 0,right = nums.size(),sum=0;
        vector<int>ans;
        while(left <right)
        {
            sum = nums[left]+nums[right];
            if(sum == target){ans.push_back(left);ans.push_back(right);break;}
            else if(target < sum){right--;}
            else if(target > sum){left++;}
            cout<<sum<<" "<<left<<" "<<right<<endl;
        }




    return 0;
}
