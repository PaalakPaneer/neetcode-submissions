class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for(int i = 0; i< nums.size(); i++){
            if(val == nums[i]){
                j++;
            }
        }
        int k = nums.size() - j;
        return k;
    }
};