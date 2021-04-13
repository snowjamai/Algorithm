class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        int f_size;
        if(numRows == 1)
            return s;
        else if(numRows == 2){
            for(int i = 0; i < s.size(); i = i + 2)
                result.push_back(s[i]);
            for(int i = 1; i < s.size(); i = i + 2)
                result.push_back(s[i]);
        }
        else{
            for(int i = 0; i < numRows; ++i){
                if(i == 0){
                    for(int j = i; j < s.size(); j = j + 2 * (numRows - 1))
                        result.push_back(s[j]);
                    
                }
                else{
                    
                    
                    for(int j = 0; j < s.size() + 2 * (numRows - 1); j = j + 2 * (numRows - 1)){
                        if(j - i > 0 && (j + i - 2*(numRows - 1)) != (j - i) && (j -i) < s.size() )  {                   
                            result.push_back(s[j - i]);
                            cout << j - i << " : " << s[j - i] << endl;
                        }
                        if(j + i < s.size())
                            result.push_back(s[j + i]);
                        
                    
                    }
                }
            }
            
        }
        return result;
    }
};