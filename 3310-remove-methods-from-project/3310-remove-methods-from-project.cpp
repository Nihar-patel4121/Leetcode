class Solution {
public:
    void dfs(int node,vector<vector<int>>& adj,vector<int>& visited){
        visited[node]=1;
        for(auto it:adj[node]){
            if(!visited[it]){
                dfs(it,adj,visited);
            }
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& arr) {
        vector<vector<int>>adj(n);
        for(auto it:arr){
            adj[it[0]].push_back(it[1]);
        }
        vector<int>visited(n,0);
        dfs(k,adj,visited);
        for(auto it:arr){
            int u=it[0];
            int v=it[1];
            if(!visited[u]&&visited[v]){
                vector<int> nihar;
                for(int i=0;i<n;i++){
                    nihar.push_back(i);
                }
                return nihar;
            }
        }
        vector<int>nihar;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                nihar.push_back(i);
            }
        }
        return nihar;
    }
};