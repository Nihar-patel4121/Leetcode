class Solution {
public:
    int func(int i,int j,int n,string &s,string &nihar,vector<vector<int>>& dp){
        if(i==n||j==n)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==nihar[j]){
            return dp[i][j]=1+func(i+1,j+1,n,s,nihar,dp);
        }else{
            return dp[i][j]=max(func(i+1,j,n,s,nihar,dp),func(i,j+1,n,s,nihar,dp));
        }
    }
    int minInsertions(string s) {
        string nihar=s;
        reverse(nihar.begin(),nihar.end());
        int n=nihar.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=func(0,0,n,s,nihar,dp);
        return n-ans;

        
    }
};