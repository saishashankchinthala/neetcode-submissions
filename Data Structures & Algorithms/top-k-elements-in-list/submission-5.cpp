class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> vec(n+1);
        unordered_map<int, int> mpp;

        for (int i: nums) mpp[i] = 1 + mpp[i];
        for (const auto& entry : mpp) vec[entry.second].push_back(entry.first);

        vector<int> res;
        for (int i=vec.size()-1; i>0; --i){
            for (int j: vec[i]){
                res.push_back(j);
                if (res.size() == k) return res;
            }
        }
    return res;

    }
};
