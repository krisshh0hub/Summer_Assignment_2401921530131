class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0 ,count=0;
        for(int i=0;i<s.size();i++){ 
            while(j<t.size()){
                if(s[i]==t[j]){
                    count++;
                    j++;
                    break;
                }
                j++;
            }
        }
        if(count==s.size()){
            return true;
        }
        return false;
    }
};
