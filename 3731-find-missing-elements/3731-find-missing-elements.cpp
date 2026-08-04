class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx=INT_MIN;
        int mn=INT_MAX;

        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
        }
        unordered_set<int> s;
        int n=nums.size();
        for(int i=mn;i<=mx;i++){
            s.insert(i);
        }
        for(int i=0;i<n;i++){
            s.erase(nums[i]);
        }
        vector<int> ans;
        for(int x:s){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};