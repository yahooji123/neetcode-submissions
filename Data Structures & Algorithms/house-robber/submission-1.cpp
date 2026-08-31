class Solution {
public:
 /*
    int solve(vector<int>&nums,int i){
      // base case
      if(i>=nums.size()){
        return 0;
      }
      // 1 case mai solve karunga
      int include=nums[i]+solve(nums,i+2);
      int exclude=solve(nums,i+1);
      return max(include,exclude);    
    }
*/

    int solveDp(vector<int>&nums,int i,vector<int>&dp){
       // base case
      if(i>=nums.size()){
        return 0;
      }
      if(dp[i]!=-1){
        return dp[i];
      }
      // 1 case mai solve karunga
      int include=nums[i]+solveDp(nums,i+2,dp);
      int exclude=solveDp(nums,i+1,dp);
      int final=max(include,exclude);
     return dp[i]=final;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int dpAns=solveDp(nums,0,dp);
        return dpAns;
    }
};
