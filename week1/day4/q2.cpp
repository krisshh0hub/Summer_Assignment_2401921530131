class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        int x=m*n;
        vector<int>a;
        int check;
        vector<vector<int>>v(r, vector<int>(c));
        if(x!=r*c){
            return mat;
        }
        else{
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    a.push_back(mat[i][j]);
                }
            }
            int id=0;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    v[i][j]=a[id++];
                }
            }
        }
        return v;
    }
};
