class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if (i>0&&nums[i]==nums[i-1]) continue;
            int current=nums[i];
            int to_find=(-1)*current;

            int start=i+1;
            int end=nums.size()-1;

            while(start<end){
                if(nums[start]+nums[end]==to_find) {
                    ans.push_back({current,nums[start],nums[end]});
                    start++;
                    end--;

                    while(start<end &&nums[start]==nums[start-1]) start++;
                    while(start<end && nums[end]==nums[end+1]) end--;
                    //break;
                } else if(nums[start]+nums[end]>to_find){
                    end--;
                } else{
                    start++;
                }
            }

        }
        return ans;

    }
};