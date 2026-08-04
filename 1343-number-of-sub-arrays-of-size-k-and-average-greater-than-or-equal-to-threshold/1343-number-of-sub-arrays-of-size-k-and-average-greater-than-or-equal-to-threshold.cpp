class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int target=k*threshold;
        int sum=0;

        for(int i=0;i<k;i++){
            sum=sum+arr[i];
        }
        
        int count=0;
        if(sum>=target)count++;
        for(int i=k;i<n;i++){
            sum=sum+arr[i];
            sum=sum-arr[i-k];
            if(sum>=target)count++;
        }
        return count;
    }
};