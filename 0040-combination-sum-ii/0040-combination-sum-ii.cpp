class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>combination;
        sort(candidates.begin(), candidates.end());
        
        formCredit(candidates, target, combination, result, 0);
        return result;
    }
    
    void formCredit(vector<int>& candidates,int target, vector<int>&combination, vector<vector<int>>&result, int start){
        if(target ==0){
            result.push_back(combination);
            return;
        }
        
        if(target<0){
            return;
        }
        
        
        for(int i =start; i<candidates.size(); i++){
             if (i > start && candidates[i] == candidates[i - 1]) continue;
            combination.push_back(candidates[i]);
            formCredit(candidates, target-candidates[i], combination, result,i+1);
            combination.pop_back();
        }
    }
};