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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newHead = head->next;
        ListNode* prev =NULL;
        ListNode* first = head;
        ListNode* sec = head->next;
        while(first!=NULL && sec!=NULL){
            ListNode* next = sec->next;
            first->next = next;
            sec->next = first;
            if(prev!=NULL){
                prev->next = sec;
            }
            prev = first;
            first = next;
            if(first == NULL ){
                sec = NULL;
            }else{
                 sec = first->next;
            }
           
        }
        return newHead;
    }
};