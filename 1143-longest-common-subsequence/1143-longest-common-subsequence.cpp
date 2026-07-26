class Solution {
public:
    // int func(int i,int j,int n,int m,string text1,string text2,vector<vector<int>>& dp){
    //     if(i==n||j==m){
    //         return 0;
    //     }
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     if(text1[i]==text2[j]) return dp[i][j]= 1+func(i+1,j+1,n,m,text1,text2,dp);
    //     else{
    //         return dp[i][j]= max(func(i+1,j,n,m,text1,text2,dp),func(i,j+1,n,m,text1,text2,dp));
    //     }
    // }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};