class Solution {
public:
    int maxArea(vector<int>& height) {

        int left=0;
        int right=height.size()-1;
        int maxwater=0;
        
        while(left<right){
            int h=min(height[left],height[right]);
            int width=right-left;
            int area = h * width;

            maxwater=max(maxwater,area);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }

        return maxwater;
    }
};
