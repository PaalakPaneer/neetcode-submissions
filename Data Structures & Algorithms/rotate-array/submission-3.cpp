class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> helper(nums);
        int n = nums.size();
        k%=n;
        int i = (n - k)%n;
        for(int j = 0; j < nums.size(); j++){
            nums[j] = helper[i];
            i = (i+1)%nums.size();
        }
    }
};