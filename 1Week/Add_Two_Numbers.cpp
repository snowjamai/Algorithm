/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <vector>


class Solution {
public:
    char num_result[101];
    
    uint GetNumber(std::vector <char> num_list){
        uint num = 0;
        
        for(int i = num_list.size() - 1;i >= 0; --i)
            num = num * 10 + num_list[i];
        return num;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::vector <char> num1;
        std::vector <char> num2;
        ListNode* tmp;
        ListNode* result_L = new ListNode();
        
        uint l1_v, l2_v, sum_result;
    
        num1.push_back(l1->val);
        if(l1->next != nullptr){
           tmp = l1->next;
        
            while(1){
              num1.push_back(tmp->val);
               if(tmp->next == nullptr)
                      break;
               tmp = tmp->next;
               }
               
             }
             l1_v = GetNumber(num1);
        
        num2.push_back(l2->val);
        if(l2->next != nullptr){
            tmp = l2->next;
        
        while(1){
            num2.push_back(tmp->val);
            if(tmp->next == nullptr)
                break;
            tmp = tmp->next;
        }
        }
        int num_len = 0;
        
        if(num1.size() >= num2.size()){
            int i;
            for( i= 0; i < num2.size(); ++i){
                if(num1[i] + num2[i] + num_result[i] < 10){
                    num_result[i] += num1[i] + num2[i];
                    num_len++;
                }
                else{
                    num_result[i] += num1[i] + num2[i] - 10;
                    num_result[i + 1] = 1;
                    num_len++;
                }
            }
            for(; i < num1.size(); ++i){
                num_result[i] += num1[i];
                if(num_result[i] >= 10){
                    num_result[i] -= 10;
                    num_result[i + 1] = 1;
                }
                num_len++;
            }
        }
        else{
            int i;
            for(i = 0; i < num1.size(); ++i){
                if(num1[i] + num2[i] + num_result[i] < 10){
                    num_result[i] += num1[i] + num2[i];
                    num_len++;
                }
                else{
                    num_result[i] += num1[i] + num2[i] - 10;
                    num_result[i + 1] = 1;
                    num_len++;
                }
            }
            for(i; i < num2.size(); ++i){
                num_result[i] += num2[i];
                if(num_result[i] >= 10){
                    num_result[i] -= 10;
                    num_result[i + 1] = 1;
                }
                num_len++;
            }
        }     
        if(num_result[num_len] != 0)
            num_len++;
        
        cout << (int)num_result[0] << (int)num_result[1] << (int) num_result[2] << endl;
        int cnt = 0;
        
        if(num_len == 1){
            result_L->val = num_result[0];
            result_L->next = nullptr;
        }
        else{
            result_L->val = num_result[0];
            result_L->next = new ListNode();
            tmp = result_L->next;
            cnt++;
            while(cnt < num_len - 1){
                tmp->next = new ListNode(num_result[cnt + 1]);
                tmp->val = num_result[cnt];
                cnt++;
                tmp = tmp->next;
            }
            if(num_len == 2){
                tmp->next = nullptr;
                tmp->val = num_result[cnt];                
            }
        }       
        return result_L;
    }
};