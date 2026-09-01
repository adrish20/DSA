class Solution {
public:
//adrish
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n= nums.size();
        int temp=0;
        for(int i=0;i<n;i++){
            temp+=nums[i];
            ans.push_back(temp);
        }
        return ans;
        
    }
};