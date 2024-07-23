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
    int getLength(ListNode* head){
        int len = 0;
        while(head != NULL){
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* reverseK(ListNode* head, int k, int length) {
        //base case
        if(head == NULL || head->next == NULL || k == 1 || length < k){
            return head;
        }

        //step 1 : reverse first k nodes
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 1;

        while(curr != NULL && count <= k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        

        //step2: Recursion dekh lega aage ka
        if(next != NULL){
            head -> next = reverseK(next,k,(length-k));
            
        }

        //step3: return head of reversed list
        head = prev;
        return head;

    }

    ListNode* reverseKGroup(ListNode*head,int k){
        int len = getLength(head);
        return reverseK(head,k,len);
    }
};