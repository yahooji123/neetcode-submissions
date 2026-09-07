class Solution {
   public:
    int solve(int i, int j, int m, int n) {
        // base case
        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        if (i >= m || j >= n) {
            return 0;
        }
        // 1 case mai solve karunga aur recursion call karunga
        int down = solve(i + 1, j, m, n);
        int right = solve(i, j + 1, m, n);
        int ans = down + right;
        return ans;
    }
     int solveUsingDp(int i,int j,int m,int n,vector<vector<int>>&dp){
         // base case
        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        if (i >= m || j >= n) {
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        // 1 case mai solve karunga aur recursion call karunga
        int down = solveUsingDp(i + 1, j, m, n,dp);
        int right = solveUsingDp(i, j + 1, m, n,dp);
        return dp[i][j] = down + right;
         
     }
    int uniquePaths(int m, int n) {
        // int ans = solve(0, 0, m, n);
        // return ans;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int ans=solveUsingDp(0,0,m,n,dp);
        return ans;
    }
};
