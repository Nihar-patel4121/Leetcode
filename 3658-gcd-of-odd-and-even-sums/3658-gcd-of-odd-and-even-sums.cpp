class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int n_2=n;
        int sum_odd=0;
        int sum_even=0;

        int i=1;
        int j=2;
        while(n--){
            sum_odd=sum_odd+i;
            i=i+2;
        }

        while(n_2--){
            sum_even=sum_even+j;
            j=j+2;
        }

        return __gcd(sum_odd,sum_even);
    }
};