class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid, l=0,h=nums.size()-1;
        while(l<=h){
            mid=(l+h)/2;
            if(nums[mid]==target){

                return mid;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }

            else{
                l=mid+1;

            }
        }

        return l;


    }
};
