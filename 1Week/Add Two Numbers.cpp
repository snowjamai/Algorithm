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
        
        l2_v = GetNumber(num2);
        
        cout << l1_v << "," << l2_v << endl;
        sum_result = l1_v + l2_v;
        
        cout << sum_result << endl;
        if(sum_result < 10){
            result_L->next = nullptr;
            result_L->val = sum_result;
        }
        else{
             result_L->val = sum_result % 10;
        result_L->next = new ListNode();
        tmp = result_L->next;
        sum_result = sum_result / 10;
        tmp->val = sum_result % 10;
        sum_result = sum_result / 10;

        while(sum_result){
            tmp->next = new ListNode(sum_result % 10);
            
            tmp = tmp->next;            
            sum_result /= 10;
        }
    
        }
       
        return result_L;
    }
};