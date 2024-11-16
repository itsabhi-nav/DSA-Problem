class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current=0;
        int maxi =0;
        
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==1){
                current++;
                maxi = max(current,maxi);
            }
            else{
                current=0;
            }
        }
        return maxi;
    }
};