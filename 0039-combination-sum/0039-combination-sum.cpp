class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>combination;
        findcombination(candidates, target, result, combination, 0);
        return result;
    }
    
    void findcombination(vector<int>&candidates,int target, vector<vector<int>>& result, vector<int> &combination, int start){
        int n = candidates.size();

        if(target==0){
            result.push_back(combination);
            return;
        }

        if(target<0){
            return;
        }

        for(int i =start; i<n ; i++){
            combination.push_back(candidates[i]);
            findcombination(candidates, target-candidates[i], result, combination, i);
            combination.pop_back();
        }
    }
};