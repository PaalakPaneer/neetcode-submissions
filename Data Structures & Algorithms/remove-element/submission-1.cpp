class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for(int i = 0; i< nums.size(); i++){
            if(val == nums[i]){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        int k = nums.size();
        return k;
    }
};