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
    
    int getLength(ListNode* head){
        int len = 0;
        while(head){
            len++;
            head = head -> next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
       
        if(!head || !head->next){
            return head;
        }
       int len = getLength(head);
       int actualRotation = (k % len);
       if(actualRotation == 0)
       return head;
       int newLastPos = len - actualRotation - 1;
       ListNode* newLastNode  = head;
        for(int i= 0; i<newLastPos; i++){
            newLastNode = newLastNode -> next; 
        }
        ListNode* newHead = newLastNode->next;
        newLastNode->next = nullptr; 

        ListNode* it = newHead;
        while(it->next){
            it = it->next;
        } 
        it->next = head ;
        return newHead;    
          
        }
    };