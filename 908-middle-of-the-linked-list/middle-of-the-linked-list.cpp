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
    ListNode* middleNode(ListNode* head) {
      if(head==NULL){
        return NULL;
      }
      else if(head->next==NULL){
        return head;
      }
      else{
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow != NULL && fast != NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;

            }
        }
        return slow;
      }

    }
};