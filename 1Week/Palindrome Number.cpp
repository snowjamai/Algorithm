class Solution {
public:
    bool isPalindrome(int x) {
        int cnt = 0;
        char num[100];
        if(x < 0)
            return false;
        
        while(x){
            num[cnt++] = x % 10;
            x /= 10;
        }
        
        if(cnt % 2 == 0){
            for(int i = 0; i < cnt/2; ++i)
                if(num[i] != num[cnt - i - 1])
                    return false;
        }
        else{
            for(int i = 0; i < (cnt/2); ++i)
                if(num[i] != num[cnt - i - 1])
                    return false;
        }
        return true;
    }
};