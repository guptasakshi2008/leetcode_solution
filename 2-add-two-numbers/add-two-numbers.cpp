ListNode* add(ListNode* temp1, ListNode* temp2,ListNode* l1, ListNode* l2 ,int prev){
    if(temp1==NULL && temp2==NULL){
        if(prev!=0){
            return new ListNode(prev);
        }
        return NULL;
    }
    int sum = prev;
    if(temp1!=NULL){
        sum += temp1->val;
         temp1 = temp1->next;
    }
    if(temp2 != NULL){
        sum += temp2->val;
        temp2 = temp2->next;
    }
    ListNode* newNode = new ListNode(sum%10);
    prev = sum/10;
    newNode->next = add(temp1 , temp2,l1, l2, prev);
    return newNode;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* temp1 = l1;
      ListNode* temp2 = l2;
      return add(temp1,temp2,l1, l2, 0);
    }
};