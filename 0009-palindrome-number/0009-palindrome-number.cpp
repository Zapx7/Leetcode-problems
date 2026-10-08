class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;

        if (x < 0)
            return false;
        
        int last_digit;
        long long  rev = 0;

        while(x != 0)
        {
            last_digit = x % 10 ;

            x = x / 10;

            rev = (rev * 10 ) + last_digit;
        }
        


    if(dup == rev)
        return true;
        
    return false;
    }
};