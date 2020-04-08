/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        
        int size = 0;
        for(ListNode* temp = head; temp->next != NULL; temp = temp->next)
            size++;
        
        for(int i=0; i<(size+1)/2; i++)
            head = head->next;
        
        return head;
    }
};
