class Solution {
public:
    int reverseDegree(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            count=count+(26-(s[i]-'a'+1)+1)*(i+1);
        }
        return count;
    }
};