
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

/*
說明:Sum of Square Numbers(c++)
兩數平方相加必須為輸入數，其中若一數為數入數即可。

解法:直接利用math.h中的sqrt去平方根，以及平方根相乘必須為target，才成立。

檢討:覺得很暴力，應該會有更好的解法。





*/
