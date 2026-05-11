class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = {};
        for(int i=0; i < nums.size()*2; i++){
            int a = i;
            a = a % nums.size();
            ans.push_back(nums[a]);
        }
        return ans;
    }
};
