class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int answer = 0;
        while(left<right){
            int area= (right-left)*min(height[right],height[left]);

            answer = max(answer,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return answer;
    }
};