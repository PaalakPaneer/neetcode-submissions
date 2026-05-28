class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l = 0;
        int r = people.size()-1;
        int ans = 0;
        sort(people.begin(), people.end());
        while(l<r){
            int sum  = people[l] + people[r];
            if(sum>limit){
                ans++;
                r--;
            }
            else if(sum<=limit){
                ans++;
                l++;
                r--;
            }
        }
        if(l==r){
            ans++;
        }
        return ans;
    }
};