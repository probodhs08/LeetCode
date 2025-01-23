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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        ListNode *start=nullptr;
        ListNode *end=nullptr;
        while(temp){
            end=temp->next;
            temp->next=start;
            start=temp;
            temp=end;
        }
        return start;
    }
};