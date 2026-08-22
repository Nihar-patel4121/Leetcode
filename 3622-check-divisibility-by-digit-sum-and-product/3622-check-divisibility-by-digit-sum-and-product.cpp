class Solution {
public:
    bool checkDivisibility(int n) {
        long long digit_sum=0;
        long long digit1=n;
        while(digit1>0){
            long long digit=digit1%10;
           digit_sum=digit_sum+digit;
           digit1=digit1/10;
        }
        long long digit2=n;
        long long digit_product=1;

        while(digit2>0){
            long long digit=digit2%10;
            digit_product=digit_product*digit;
            digit2=digit2/10;
        }

        if(n%(digit_sum+digit_product)==0) return true;
        else return false;
    }
};