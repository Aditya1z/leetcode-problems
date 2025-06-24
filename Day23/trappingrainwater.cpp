class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right=height.size()-1;
        int maxwater=0,leftmax=0,rightmax=0;

        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftmax){
                    leftmax=height[left];
                }
                else{
                    maxwater+=leftmax-height[left];
                }
                left++;
            }
            
            else{
                if(height[right]>=rightmax){
                    rightmax=height[right];
                }
                else{
                    maxwater+=rightmax-height[right];
                }
                right--;
            }


           

        }

        return maxwater;
    }
};