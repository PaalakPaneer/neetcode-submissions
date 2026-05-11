class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i< strs[0].length(); i++){
            for(string str : strs){
                if((str[i] != strs[0][i]) or (i == str.length())){
                    return ans;
                }
            }
            ans = ans + strs[0][i];
        }
        return ans;
    }
};