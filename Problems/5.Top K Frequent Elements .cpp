class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto num: nums){
            mp[num]++;
        }
        vector<pair<int,int>>freqVec(mp.begin(),mp.end());
        
        sort(freqVec.begin(),freqVec.end(),compare);
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(freqVec[i].first);
        }
        return ans;


    }

    static bool compare(const pair<int,int>& a, const pair<int,int>& b) {
        return a.second > b.second; // Fixed the typo 'asecond'
    }
};