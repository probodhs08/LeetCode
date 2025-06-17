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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        if(n<k)return head;
        if(2*k-1 == n)return head;
        ListNode *x=head,*x_prev=NULL, *y=head, *y_prev=NULL;
        for(int i=1;i<k;i++){
            x_prev=x;
            x=x->next;
        }
        for(int i=1;i<n-k+1;i++){
            y_prev=y;
            y=y->next;
        }
        if(x_prev){
            x_prev->next=y;
        }
        if(y_prev){
            y_prev->next=x;
        }
        ListNode *temp1=x->next;
        x->next=y->next;
        y->next=temp1;
        if(k==1){
            head=y;
        }
        if(k==n){
            head=x;
        }
        return head;
    }
};