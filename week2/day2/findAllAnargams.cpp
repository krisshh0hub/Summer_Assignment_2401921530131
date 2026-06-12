class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>freq1(26,0),freq2(26,0);
        vector<int>v;
        for(char it : p){
            freq1[it-'a']++;
        }
        int k=p.size();int left=0;
        for(int i=0;i<s.size();i++){
            freq2[s[i]-'a']++;
            if(i>=k){
                freq2[s[i-k]-'a']--;
                left++;
            }
            if(freq1==freq2){
                v.emplace_back(left);
            }
        }
        return v;   
    }
};
