class Solution {
public:
    bool f(int i,string& c,int n  )
    {
        
            if(i >= n/2) return true;

            else if(c[i] != c[n-i-1])
            {
                return false;
            }
            return f(i+1 , c  , n);
            
   
    }
    bool isPalindrome(string s) {
        string c = "";
    

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(isalnum(s[i]))
            {
                c += tolower(s[i]);
            }
        }

        int n = c.length();
        return f(0,c,n);

        
    }
};