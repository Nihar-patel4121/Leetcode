class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n=s.size();
        int ans=0;
        int l=0;
        unordered_map<char,int> mpp;
        for(int r=0;r<n;r++){
            mpp[s[r]]++;
            while(mpp[s[r]]==k){
                mpp[s[l]]--;
                l++;
            }
            ans=ans+l;
        }
        return ans;
    }
};