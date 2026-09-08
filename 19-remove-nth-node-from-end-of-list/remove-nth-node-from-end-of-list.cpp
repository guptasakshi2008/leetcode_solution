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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode *temp = head;
      int count=1;
      while(temp->next!=NULL){
        count++;
        temp=temp->next;
      }
      if(count==n){
        return head->next;
      }
      ListNode *curr=head;
      int count1=1;
      while(count1!=count-n){
        curr=curr->next;
        count1++;
      }
      ListNode *nextNode=curr->next;
      curr->next=curr->next->next;
      nextNode->next=NULL;
      return head;
    }
};