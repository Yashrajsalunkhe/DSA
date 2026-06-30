class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>num_set(nums.begin(), nums.end());;
       
        int longest_streak = 0;
        for(int num : num_set)
            
            if(num_set.find(num-1)==num_set.end()){
                int current_num=num;
                 int count=1;
                while(num_set.find(current_num+1)!=num_set.end()){
                    count++;
                    current_num++;
                }
                longest_streak = max(longest_streak, count);
            }
            return longest_streak;
        }
};
