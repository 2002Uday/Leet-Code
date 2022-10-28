class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == -2147483648 && divisor == -1){
            int i = -2147483647 / divisor;
            return i;
        }
        int ans = dividend / divisor;
        return ans;
    }
};