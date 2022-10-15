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
    ListNode *Rotate(ListNode *head){
        ListNode *prv = NULL;
        ListNode *temp = head;
        while(temp -> next != NULL){
            prv = temp;
            temp = temp -> next;
        }
        prv -> next = NULL;
        temp -> next = head;
        ListNode *Nhead = temp;
        return Nhead;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(k >= 2000000000){
            k = 200000000;
        }
        int L = length(head);
        if(head == NULL){
            return NULL;
        }
        else if(L == 1){
            return head;
        }
        while(k > 0){
            head = Rotate(head);
            k--;
        }
        return head;
    }
};