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
        int size = 0;
        ListNode * t1 = head;
        while(t1 != NULL){
            t1 = t1 -> next;
            size++;
        }
        int midI = size/2;
        ListNode * t2 = head;
        for(int i = 0 ; i < midI; i++){
            t2 = t2 -> next;
        }
        return t2;
    }
};