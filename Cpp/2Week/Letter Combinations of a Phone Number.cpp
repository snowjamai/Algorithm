class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        string tmp;

        char word[8][4] = {{'a','b','c'},
                           {'d','e','f'},
                           {'g','h','i'},
                           {'j', 'k', 'l'},
                           {'m','n','o'},
                           {'p','q','r','s'},
                           {'t','u','v'},
                           {'w','x','y','z'}};
        
        if(digits.size() == 0){
            return result;    
        }
        else if(digits.size() == 1){          
            int i_max;
            
            if(digits[0] == '7' || digits[0] == '9')
                i_max = 4;
            else
                i_max = 3;
            
            for(int i = 0; i < i_max; ++i){
                tmp.push_back(word[digits[0] - '2'][i]);            
                result.push_back(tmp);
                tmp.clear();
            }
            return result;            
        }
        else if(digits.size() == 2){
            int i_max, j_max;
            if(digits[0] == '7' || digits[0] == '9')
                i_max = 4;
            else
                i_max = 3;
            if(digits[1] == '7' || digits[1] == '9')
                j_max = 4;
            else
                j_max = 3;
            
            for(int i = 0; i < i_max; ++i){
                tmp.push_back(word[digits[0] - '2'][i]);
                for(int j = 0; j < j_max; ++j){
                    tmp.push_back(word[digits[1] - '2'][j]);
                    result.push_back(tmp);
                    tmp.erase(tmp.begin() + 1);
                }
                tmp.erase(tmp.begin());           
            }                 
        }
        else if(digits.size() == 3){
            int i_max, j_max, k_max;
            if(digits[0] == '7' || digits[0] == '9')
                i_max = 4;
            else
                i_max = 3;
            if(digits[1] == '7' || digits[1] == '9')
                j_max = 4;
            else
                j_max = 3;
            if(digits[2] == '7' || digits[2] == '9')
                k_max = 4;
            else
                k_max = 3;
            
            for(int i = 0; i < i_max; ++i){
                tmp.push_back(word[digits[0] - '2'][i]);
                for(int j = 0; j < j_max; ++j){
                    tmp.push_back(word[digits[1] - '2'][j]);
                    for(int k = 0; k < k_max; ++k){
                        tmp.push_back(word[digits[2] - '2'][k]);
                        result.push_back(tmp);
                        tmp.erase(tmp.begin() + 2);
                    }
                    tmp.erase(tmp.begin() + 1);
                }
                tmp.erase(tmp.begin());           
            }          
        }
        else if(digits.size() == 4){
            int i_max, j_max, k_max, l_max;
            if(digits[0] == '7' || digits[0] == '9')
                i_max = 4;
            else
                i_max = 3;
            if(digits[1] == '7' || digits[1] == '9')
                j_max = 4;
            else
                j_max = 3;
            if(digits[2] == '7' || digits[2] == '9')
                k_max = 4;
            else
                k_max = 3;
            if(digits[3] == '7' || digits[3] == '9')
                l_max = 4;
            else
                l_max = 3;
            
            for(int i = 0; i < i_max; ++i){
                tmp.push_back(word[digits[0] - '2'][i]);
                for(int j = 0; j < j_max; ++j){
                    tmp.push_back(word[digits[1] - '2'][j]);
                    for(int k = 0; k < k_max; ++k){
                        tmp.push_back(word[digits[2] - '2'][k]);
                        for(int l = 0; l < l_max; ++l){
                            tmp.push_back(word[digits[3] - '2'][l]);
                            result.push_back(tmp);
                            tmp.erase(tmp.begin() + 3);
                        }                        
                        tmp.erase(tmp.begin() + 2);
                    }
                    tmp.erase(tmp.begin() + 1);
                }
                tmp.erase(tmp.begin());           
            }          
            
        }
        return result;
    }
};