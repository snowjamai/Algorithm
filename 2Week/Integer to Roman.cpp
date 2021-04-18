class Solution {
public:
    string intToRoman(int num) {
        int tmp;
        int cnt;
        string result;
        
        while(num){
            tmp = num / 1000;
            if(tmp != 0){
                for(int i = 0; i < tmp; ++i)
                    result.push_back('M');
                num -= 1000 * tmp;
            }
            else{
                tmp = num / 500;
                if(tmp != 0){
                    for(int i = 0; i < tmp; ++i)
                        result.push_back('D');
                    num -= 500 * tmp;
                }
                else{
                    tmp = num / 100;
                    if(tmp != 0){
                        for(int i = 0; i < tmp; ++i)
                            result.push_back('C');
                        num -= 100 * tmp;
                    }
                    else{
                        tmp = num / 50;
                        if(tmp != 0){
                            for(int i = 0; i < tmp; ++i)
                                result.push_back('L');
                            num -= 50 * tmp;
                        }
                        else{
                            tmp = num / 10;
                            if(tmp != 0){
                                for(int i = 0; i < tmp; ++i)
                                    result.push_back('X');
                                num -= 10 * tmp;
                            }
                            else{
                                tmp = num / 5;
                                if(tmp != 0){
                                    for(int i = 0; i < tmp; ++i)
                                        result.push_back('V');
                                    num -= 5 * tmp;
                                }
                                else{
                                    tmp = num;
                                    for(int i = 0; i < tmp; ++i)
                                        result.push_back('I');
                                    num = 0;
                                }
                            
                            }
                                
                        }
                        
                    }
                }
            }        
        }
        return result;
    }
};