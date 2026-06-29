class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>mp;
        for(string a:strs){
            string key = a;
            sort(key.begin(), key.end());
            mp[key].push_back(a);
        }
        
        vector<<vector<string>>ans;
        for(const auto& pair: mp){
            ans.push_back(entry.second);
        }
        
    }
};