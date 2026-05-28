class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int max = 0;
        while(i<heights.size()-1){
            int j = heights.size()-1;
            while(i<j){
                int area = (j-i)*(min(heights[i], heights[j]));
                if(area>max){
                    max = area;
                }
                j--;
            }
            i++;
        }
        return max;
    }
};
