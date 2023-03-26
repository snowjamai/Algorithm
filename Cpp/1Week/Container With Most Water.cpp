class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int square;
        int l = 0, r = height.size() - 1;
        
        
        while(l<r){
            square = (height[l] > height[r] ? height[r] : height[l]) * (r - l);
            max = max > square ? max : square;
            if(height[l] < height[r])
                   l++;
            else
                   r--;
        }
        return max;     
    }
};