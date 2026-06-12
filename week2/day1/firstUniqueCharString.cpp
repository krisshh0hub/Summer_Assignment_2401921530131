class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>>mp;
        for(int i=0;i<s.size();i++){
            char val=s[i];
            if(mp.find(val)==mp.end()){
                mp[val]={1,i};
            }else{
                mp[val].first++;
            }
        }
        int ans;
        for(int i=0;i<s.size();i++){
            int x=s[i];
            if(mp[x].first==1){
                ans=mp[x].second;
                return ans;
            }
        }
        return -1;
    }
};
