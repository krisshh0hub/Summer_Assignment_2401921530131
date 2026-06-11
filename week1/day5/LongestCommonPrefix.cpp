class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string prefix="";
        int n=strs.size()-1;
        for(int i=0;i<strs[0].size();i++){
            if(strs[0][i]==strs[n][i]){
                prefix +=strs[0][i];
            }else{
                return prefix;
            }
        }
        return prefix;

    }
};
