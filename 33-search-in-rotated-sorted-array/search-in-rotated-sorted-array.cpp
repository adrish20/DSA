class Solution {
public:
//adrish
    int search(vector<int>& nums, int target) {
        int ans=-1;
        int n = nums.size();
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(nums[mid]==target){
                return mid;
            }
            //is left half sorted?
            else if(nums[lo]<=nums[mid]){
                //yes left half is sorted
                if(target>=nums[lo]&&target<=nums[mid]){
                    //yes target element is in the left half
                    hi=mid-1;
                }
                else{
                    lo=mid+1;//element not in left half, discard left half
                }

            }
            else{
                //no, right half is sorted
                if(target>=nums[mid]&&target<=nums[hi]){
                    lo=mid+1;//element in right half
                }
                else{hi=mid-1;}//no element not in right half, discard right half

            }

        }
        return -1;
        
    }
};