class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;

        int n = height.size();
        int left = 0, right = n-1;
        int leftMax = 0, rightMax = 0;
        int waterTrapped = 0;

        while(left < right) {
            if(height[left] < height[right]) {
                leftMax = max(leftMax, height[left]);
                waterTrapped += leftMax - height[left];
                left++;
            } else {
                rightMax = max(rightMax, height[right]);
                waterTrapped += rightMax - height[right];
                right--;
            }
        }

        return waterTrapped;
        
    }
};