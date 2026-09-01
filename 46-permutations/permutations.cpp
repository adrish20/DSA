class Solution {
public:
//adrish
void rec(int i,vector<int>&tmp,vector<vector<int>>&res,int n,vector<int>&v){
    if(i>=n){
        res.push_back(tmp);
        return;
    }
    for(int ind=i;ind<n;ind++){
        swap(tmp[ind],tmp[i]);
        rec(i+1,tmp,res,n,v);
        swap(tmp[ind],tmp[i]);
    }
}
    vector<vector<int>> permute(vector<int>&v) {
        vector<int>tmp=v;
        int n=v.size();
        vector<vector<int>>res;
        rec(0,tmp,res,n,v);
        return res;

        
    }
};