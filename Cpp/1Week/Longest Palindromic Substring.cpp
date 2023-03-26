class Solution {
public:
    char alpha[26];
    
    int GetPalindromic(int start, int end, string s) {
        int i = start;
        int j = end;
        while(1){
            if(i >= j)  return end - start + 1;
            
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else
                return -1;
        }
    }
    string longestPalindrome(string s) {
        int len;
  
  
        if(s.size() == 1)
            return s;
        
        for(int pal_len = s.size() - 1; pal_len > 0; --pal_len) {
            for(int i = 0; i + pal_len < s.size(); ++i){
                len = GetPalindromic(i, i + pal_len, s);  
                
                if(len != -1){
                    return s.substr(i, pal_len + 1);
                }
                    
            }
                
                        
        }
        return s.substr(0,1);
    }
};