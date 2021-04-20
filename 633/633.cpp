class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int a = sqrt(c); a >= 0; --a){
            if((a*a) == c) return true;
            int b = c - a*a ;
            int t = sqrt(b);
            if((t*t) == b) return true;
        }
        return false;  
    }
};
