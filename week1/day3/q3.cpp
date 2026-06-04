class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int width,area; int maxi=INT_MIN;
        while(i<=j){
            width=j-i;
            area=width * min(height[i],height[j]);
            maxi=max(area,maxi);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};
