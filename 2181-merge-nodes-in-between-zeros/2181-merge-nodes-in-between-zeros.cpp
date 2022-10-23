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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *t1 = head;
        ListNode *t2 = head -> next;  
        while(t2 -> next != NULL){
            if(t2 -> val != 0){
                t1 -> val = t1 -> val + t2 -> val;
                ListNode *temp = t2;
                t2 = t2-> next;
                delete temp;
            }else{
                t1 -> next = t2;
                t1 = t2;
                t2 = t2 -> next;
            }
        }
        t1 -> next = NULL;
        delete t2;
        return head;
    }
};