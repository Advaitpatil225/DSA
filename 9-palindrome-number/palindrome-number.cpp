class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        int original=num;
        int digits;
        long long reverse=0;

        if (num<0)
            return false;
        while(num>0){
            digits=num%10;
            reverse=reverse*10+digits;
            num=num/10;}

        if (original==reverse)
            return true;
        else 
            return false;
        
    }
};