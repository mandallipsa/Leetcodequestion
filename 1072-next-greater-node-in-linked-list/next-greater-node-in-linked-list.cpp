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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>LL;
       while(head){
          LL.push_back(head->val);
          head=head->next;
       } 
       vector<int>ans(LL.size());
       stack<int>st;
       for(int i=0;i<LL.size();i++){
           while(!st.empty()&& LL[i]>LL[st.top()]){
               int k =st.top();
               st.pop();
               ans[k]=LL[i];
           }
           st.push(i);
       }
       return ans;
    }
};