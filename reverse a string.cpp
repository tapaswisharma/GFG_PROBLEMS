class Solution {
  public:
    string revStr(string S) {
        string ans="";
       for(int i=S.length(); i>=0; i--){
           ans.push_back(S[i]);
       }
       return ans;
    }
};
