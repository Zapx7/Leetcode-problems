class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int cnt = 0;
        while(s[i] == ' ')
        {
            --i;
        }
        for(; i >= 0 ; i--)
        {
            if(s[i] != ' ')
            {
                cnt ++;
            }
            else
            {
                break;
            }
        }
        return cnt ;
    }
};