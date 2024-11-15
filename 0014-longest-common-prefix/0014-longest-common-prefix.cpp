class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int  n = strs.size();
        
        sort(strs.begin(), strs.end());
        
        string s1 = strs[0];
        string s2 = strs[n-1];
        
        int i =0;
    string ans;
        
        while(i<s1.size() && i<s2.size()){
           if(s1[i]==s2[i]){
            ans.push_back(s1[i]);
           }
            else{
                break;
            }
            i++;
        }
        return ans;
    }
};