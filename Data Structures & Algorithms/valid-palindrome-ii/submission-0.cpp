class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        bool a = false;
        while(i < j) {
            while(i < j && !isalnum(s[i])) {
                i++;
            }
            while(i < j && !isalnum(s[j])) {
                j--;
            }
            if(tolower(s[i]) == tolower(s[j])) {
                a = true;
            }
            i++;
            j--;
        }
        if(a==true){
            return true;
        }
        for(int k = 0; k<s.size(); k++){
            int i = 0;
            string s1 = s.substr(0, i) + s.substr(i + 1);
            int j = s1.size()-1;
            while(i < j) {
            while(i < j && !isalnum(s1[i])) {
                i++;
            }
            while(i < j && !isalnum(s1[j])) {
                j--;
            }
            if(tolower(s[i]) == tolower(s1[j])) {
                a = true;
            }
            i++;
            j--;
        }
        a = false;
        }
        if(a==true){
            return true;
        }
        return false;
    }
};