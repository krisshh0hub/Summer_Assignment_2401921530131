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



//left pointer to shrink window , right(i here) one to inc window size

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0, ans = 0;
        for(int i = 0; i < s.size(); i++) {
            while(st.count(s[i])) {
                st.erase(s[left]);// jab tak repeating character present hai ,becz we wanna substring
                left++;
            }
            st.insert(s[i]);
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};
