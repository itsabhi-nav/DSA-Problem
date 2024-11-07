class Solution {
public:
    vector<vector<int>> permute(vector<int>& arr) {
      int  n = arr.size();
        sort(arr.begin(), arr.end());
        
        // Use a set to store unique permutations (to avoid duplicates)
        set<vector<int>> unique_permutations;
        
        // Generate all permutations using next_permutation
        do {
            // Insert the current permutation into the set
            unique_permutations.insert(arr);
        } while (next_permutation(arr.begin(), arr.end()));
        
        // Convert the set into a vector of vectors to return the result
        vector<vector<int>> result(unique_permutations.begin(), unique_permutations.end());
        
        return result;
    }
};