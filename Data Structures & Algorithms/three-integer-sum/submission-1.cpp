class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sort the input array
        vector<vector<int>> ans = {};
        int a = 0; //pointer for ans
        int i = 0;
        while(i<int(nums.size()) - 2){
            int left = i+1; 
            int right = nums.size() - 1;
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left+1]) left++;   // add
                    while(left < right && nums[right] == nums[right-1]) right--; // add
                    left++;
                    right--;
                }
                else if(sum>0){
                    right--;
                }
                else{
                    left++;
                }
            }
            i++;
            while(i < (int)nums.size() - 2 && nums[i] == nums[i-1]){
                i++;  // skip duplicates
            }
        }
        return ans;
    }
};