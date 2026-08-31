class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
                int n=matrix.size();
        int m=matrix[0].size();
        int total=n*m;
        int s=0;
        int e=total-1;

        while(s<=e){
            int mid=(s+e)/2;
            int rowi=mid/m;
            int coli=mid%m;
            if(matrix[rowi][coli]==target){
                return true;
            }
            else if (matrix[rowi][coli]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
          
        }    
            
          return false;

    }
};
