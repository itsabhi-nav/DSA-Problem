class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        
        for(int i =0; i<n*2; i++){
            int index=i%n;
            while(!st.empty() && arr[st.top()]<arr[index]){
                ans[st.top()]= arr[index];
                st.pop();
            }

             st.push(index);

        }
       
          return ans;
    }
    
};