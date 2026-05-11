class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp;
        int j = nums.size() - 1;
        for(int i = 0; i <= j;){
            if(nums[i] == 2){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j--;
            }else{
                i++;
            }
        }
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                k++;
            }
        }

    }
};