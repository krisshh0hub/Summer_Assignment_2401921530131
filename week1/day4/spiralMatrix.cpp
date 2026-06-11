class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int rowstart=0,colstart=0,rowend=m-1,colend=n-1;
        int total=n*m;int count=0;
        vector<int>v;
        while(count<total){
            for(int i=colstart;i<=colend;i++){
                v.push_back(matrix[rowstart][i]);
                count++;
            }
            rowstart++;
            for(int j=rowstart;j<=rowend;j++){
                v.push_back(matrix[j][colend]);
                count++;
            }
            colend--;
            if(rowstart<=rowend){
                for(int k=colend;k>=colstart;k--){
                    v.push_back(matrix[rowend][k]);
                    count++;
                }
                rowend--;
            }
            if(colstart<=colend){
                for(int p=rowend;p>=rowstart;p--){
                    v.push_back(matrix[p][colstart]);
                    count++;
                }
                colstart++;
            }
            
        }
        return v;
    }
};
