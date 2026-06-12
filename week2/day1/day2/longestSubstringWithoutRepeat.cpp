//o(n2) time
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string sub="";int maxi=0;
        for(int i=0;i<s.size();i++){
            int start=i; int pos=sub.find(s[i]);
            if(pos==string::npos){
                sub+=s[i];
            }
            else{
                sub.erase(0,pos+1);
                sub+=s[i];
                
            }
            maxi=max(maxi,(int)sub.size());
        }
        
        return maxi;
    }
};
