class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ans = nums[0];
        for(int n : nums){
            if(n == ans){
                count++;
            }
            else{
                if(count==0){
                    ans = n;
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        return ans;
    }
};