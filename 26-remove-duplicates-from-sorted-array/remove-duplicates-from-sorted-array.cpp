class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;//assume first element as unique and start iterating from second element
        int n= nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
        
};