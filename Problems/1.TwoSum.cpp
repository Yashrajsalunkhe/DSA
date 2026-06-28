#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;


vector<int> TwoSum(vector<int>& nums,int target){
    
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){

        int need= target- nums[i];
        if (mp.find(need)!=mp.end())
        {
            return{mp[need],i};
        }
        mp[nums[i]]=i;
    }
    return {};
    
}


int main(){
    vector<int> nums={2,8,7,5,9};
    int target =9;

    vector<int> ans = TwoSum(nums, target);
    cout<<ans[0]<<" "<<ans[1];
}