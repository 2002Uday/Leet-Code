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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * curr = head;
        ListNode * prv = head;
        while(curr != NULL){
            if(curr -> val == val){
                if(curr == head){
                    head = head -> next;
                    delete curr;
                    curr = head;
                }else{
                    ListNode *del = curr;
                    curr = curr -> next;
                    prv -> next = curr;
                    delete del;
                }
            }else{
                prv = curr;
                curr = curr -> next;
            }
        }
        return head;
    }
    
};