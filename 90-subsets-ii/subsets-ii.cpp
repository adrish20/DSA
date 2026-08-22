class Solution {
    //Adrish
public:
    void rec(int i, vector<int>& tmp, vector<vector<int>>& res, int n, vector<int>& v){
        res.push_back(tmp);
        if(i>=n){
            return;
        }
        for(int ind=i;ind<n;ind++){
            if(ind==i||(v[ind]!=v[ind-1])){
                tmp.push_back(v[ind]);
                rec(ind+1,tmp,res,n,v);
                tmp.pop_back();
            }
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        int n = v.size();
        sort(v.begin(), v.end()); // Sorting helps group duplicates together
        
        vector<int> tmp;
        vector<vector<int>> res;
        set<vector<int>> st;
        
        rec(0, tmp, res, n, v);
        for (auto &p : st){
            res.push_back(p);
        }
        return res;
    }
};