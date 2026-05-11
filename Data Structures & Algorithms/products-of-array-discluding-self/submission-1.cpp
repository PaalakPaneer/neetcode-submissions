class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];
        vector<int> postfix(nums.size());
        int end = nums.size() - 1;
        postfix[end] = nums[end];

        for(int i = 1; i <= end; i++){
            prefix[i] =prefix[i-1]*nums[i];
        }
        for(int i = end-1; i >= 0; i--){
            postfix[i] = postfix[i+1] * nums[i];
        }
        for(int i = 0; i<= end; i++){
            if(i==0){
                ans.push_back(postfix[i+1]);
            }else if(i==end){
                ans.push_back(prefix[end-1]);
            }else{
                ans.push_back(prefix[i-1] * postfix[i+1]);
            }
        }
        return ans;

    }
};
