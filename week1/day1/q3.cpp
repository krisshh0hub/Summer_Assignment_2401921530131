class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=0,profit=0;
        int i=0;int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            price=prices[i]-mini;
            profit=max(profit,price);
        }
        return profit;
    } 
};
