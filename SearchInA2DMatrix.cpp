bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        int end=0;
        if(mat[0][0]>target){
            return false;
        }
        if(mat[0][0]==target){
            return true;
        }
        for(int i=1;i<n;i++){
              if(mat[i][0]==target){
                  return true;
                  break;
              }
              if(mat[i][0]>target){
                  end=i;
                  break;
              }
        }
        for(int j=1;j<m;j++){
            if(mat[end-1][j]==target){
                return true;
                break;
            }
            if(mat[n-1][j]==target){
                return true;
                break;
            }
        }
        return false;
}