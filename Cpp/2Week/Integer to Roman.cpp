class Solution {
public:
    string intToRoman(int num) {
        string s;
        int re;
        
        re = num / 1000;
        num = num % 1000;
        if(re){
            for(int i = 0; i < re; ++i)
                s.push_back('M');
        }
        re = num / 100;
        num = num % 100;
        
        if(re>5 && re < 9){
            s.push_back('D');
            for(int i = 0; i < re - 5; ++i){
                s.push_back('C');
            }
        }
        else{
            switch(re){
            case 9:
                s.push_back('C');
                s.push_back('M');
                break;
            case 4:
                s.push_back('C');
                s.push_back('D');
                break;
            case 5:
                s.push_back('D');
                break;
            default:
                for(int i =0; i < re; ++i)
                    s.push_back('C');
                break;                
            }
        }
        
        
        re = num / 10;
        num = num% 10;
        
        if(re > 5 && re < 9){
            s.push_back('L');
            for(int i = 0; i < re - 5; ++i)
                s.push_back('X');
        }
        else{
        switch(re){
            case 9:
                s.push_back('X');
                s.push_back('C');
                break;
            case 4:
                s.push_back('X');
                s.push_back('L');
                break;
            case 5:
                s.push_back('L');
                break;
            default:
                for(int i =0; i < re; ++i)
                    s.push_back('X');
                break;          
        }
        }
        if(num > 5 && num < 9){
            s.push_back('V');
            
            for(int i = 0; i < num -5; ++i)
                s.push_back('I');
        }
        else{
            switch(num){
                    case 9:
                s.push_back('I');
                s.push_back('X');
                break;
            case 4:
                s.push_back('I');
                s.push_back('V');
                break;
            case 5:
                s.push_back('V');
                break;
            default:
                for(int i =0; i < num; ++i)
                    s.push_back('I');
                break;         
            }
        }
        return s;
    }
};