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
    int length(ListNode *head){
    int count = 0;
    ListNode *temp = head;
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp = head;
        ListNode *prv = NULL;
        int L = length(head);
        if(L == 1){
            return NULL;
        }
        int mid = L/2;
        for(int i = 0 ; i < mid; i++){
            prv = temp;
            temp = temp -> next;
        }
        prv -> next = temp -> next;
        delete temp;
        return head;
    }
};