class Solution {
public:
    long long sumAndMultiply(int n) {
        string str=to_string(n);
        string ans="";
        long long sum=0;
        for(int i=0;i<str.size();i++){
            if(str[i]!='0'){
                ans.push_back(str[i]);
            }
           sum=sum+(str[i]-'0');
        }
        long long nihar=0;
        if(!ans.empty()){
            nihar=stoll(ans);
        }
        return nihar*sum;
        
    }
};