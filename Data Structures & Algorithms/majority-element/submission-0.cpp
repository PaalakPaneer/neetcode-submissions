class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> res;
        for(int n : nums){
            res[n] += 1;
        }

        for(auto &i : res){
            if(i.second>(nums.size()/2)){
                return i.first;
            }
        }
    }
};