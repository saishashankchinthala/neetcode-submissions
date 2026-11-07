class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for (string i: strs){
            string key = i;
            sort(key.begin(), key.end());
            mpp[key].push_back(i);
        }
        vector<vector<string>> strs2;
        for (auto i: mpp){
            strs2.push_back(i.second);
        }
        return strs2;
    }
};
