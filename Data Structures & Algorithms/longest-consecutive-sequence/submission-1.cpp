class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for(int n : s){
            if(s.find(n-1) == s.end()){
                int current = n;
                int length = 1;
                while(s.find(current+1)!=s.end()){
                    length++;
                    current++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};
