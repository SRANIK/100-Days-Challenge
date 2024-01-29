/** 61. Rotate List Day29:jant29th 2024

Given the head of a linked list, rotate the list to the right by k places.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
Example 2:


Input: head = [0,1,2], k = 4
Output: [2,0,1]



  Constraints:

The number of nodes in the list is in the range [0, 500].
-100 <= Node.val <= 100
0 <= k <= 2 * 109




  *///


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
 if(!head || !head->next)
            return head;
        struct ListNode *front=head,*tail=NULL;
        int i=0;
        while(front)
        {
            i++;
            front=front->next;
        }
        if(k>i)
        {
            k=k%i;
        }
        while(k)
        {
            tail=head;
            front=head;
            while(front->next->next)
            {
                front=front->next;
            }
            front->next->next=tail;         //5->next=1
            head=front->next;               //head=5
            front->next=NULL;               //4->next=NULL
            k--;
        }
        return head;
}
