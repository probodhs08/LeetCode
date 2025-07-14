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
    int getDecimalValue(ListNode* head) {
        int n=-1;
        int ans=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        ListNode* curr=head;
        while(curr){
            ans+=curr->val*pow(2,n);
            n--;
            curr=curr->next;
        }
        return ans;
    }
};