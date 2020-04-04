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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        vector<int> ans;
        int carry = 0;
        bool b1 = true, b2 = true; 
        while(true) {
            int n1 = (b1 ? l1->val:0);
            int n2 = (b2 ? l2->val:0);
            int sum = n1+n2;
            if(((sum%10) + carry)>=10) ans.push_back(((sum%10) + carry)%10), carry=1;
            else ans.push_back((sum%10) + carry), carry = sum/10;
            if(l1->next == NULL) b1 = false;
            if(l2->next == NULL) b2 = false;
            if(!b1 && !b2) break;
            l1 = (l1->next == NULL ? l1 : l1->next);
            l2 = (l2->next == NULL ? l2 : l2->next);
        }
        if(carry) {
            ans.push_back(carry);
        }
        
        l3 = new ListNode(ans[0]);
        ListNode* l = l3;
        
        for(int i=1; i<ans.size(); i++) {
            l3->next = new ListNode(ans[i]);
            l3 = l3->next;
        }
        
        return l;
        
    }
};
