class Solution {
public:
    bool validPalindrome(string s) {

        int i = 0;
        int j = s.size() - 1;
        bool a = true;

        // check original string
        while(i < j) {

            while(i < j && !isalnum(s[i])) i++;
            while(i < j && !isalnum(s[j])) j--;

            if(tolower(s[i]) != tolower(s[j])) {
                a = false;
            }

            i++;
            j--;
        }

        if(a) {
            return true;
        }

        for(int k = 0; k < s.size(); k++) {

            string s1 = s.substr(0, k) + s.substr(k + 1);

            i = 0;
            j = s1.size() - 1;

            a = true;

            while(i < j) {

                while(i < j && !isalnum(s1[i])) i++;
                while(i < j && !isalnum(s1[j])) j--;

                if(tolower(s1[i]) != tolower(s1[j])) {
                    a = false;
                }

                i++;
                j--;
            }

            if(a) {
                return true;
            }
        }

        return false;
    }
};