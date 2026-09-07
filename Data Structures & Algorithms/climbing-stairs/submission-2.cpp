class Solution {
public:
/*
    int solve(int n){
        //base case
        if(n==0 || n==1){
            return 1;
        }
        // 1 case mai handle karunga
        int one=solve(n-1);
        int two=solve(n-2);
        int ans=one+two;
        // baki ka recursion ko de dunga mai 
        return ans;

    }
    */
    /*
    int solveDp(int n,vector<int>&dp){
       //base case
        if(n==0 || n==1){
            return 1;
        }
        //yaha agar dp me answr hai to mai usko return kr dunga 
        if(dp[n]!=-1){
            return  dp[n];
        }
        // 1 case mai handle karunga
        int one=solveDp(n-1,dp);
        int two=solveDp(n-2,dp);
        int ans=one+two;
        // baki ka recursion ko de dunga mai 
        return dp[n]=ans;

    }
    */

    int solveUsingTabulation(int n){
        vector<int>dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
        int one=dp[i-1];
        int two=dp[i-2];
        int ans=one+two;
            dp[i]=ans;
        }
       return dp[n];
    }
    int climbStairs(int n) {  
        // int ans=solve(n);
        // return ans;
        // vector<int>dp(n+1,-1);
        // int dpAns=solveDp(n,dp);
        // return dpAns;
        int ans=solveUsingTabulation(n);
        return ans;
    }
};
