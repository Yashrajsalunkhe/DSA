class Solution {
public:
    int trap(vector<int>& height) {

        // Two pointers: start from both ends
        int left = 0;
        int right = height.size() - 1;

        // Total trapped water
        int water = 0;

        // Highest wall seen so far from left and right
        int leftMax = 0;
        int rightMax = 0;

        // Continue until both pointers meet
        while (left < right) {

            // Process the smaller height
            // Water level is limited by the smaller side
            if (height[left] < height[right]) {

                // Update maximum height seen from the left
                leftMax = max(leftMax, height[left]);

                // Water trapped at current left position
                // = Highest left wall - Current height
                water += leftMax - height[left];

                // Move left pointer
                left++;
            }
            else {

                // Update maximum height seen from the right
                rightMax = max(rightMax, height[right]);

                // Water trapped at current right position
                // = Highest right wall - Current height
                water += rightMax - height[right];

                // Move right pointer
                right--;
            }
        }

        // Return total trapped water
        return water;
    }
};