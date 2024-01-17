/* Day 16: Jan 16th 2024 :  83. Remove Duplicates from Sorted List
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]
 

Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.

  */


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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
        return head;

        ListNode *ptr1 = head;
        ListNode *ptr2 = head ->next;

        while(ptr2!=NULL)
        {
            if(ptr1->val != ptr2->val )
            {
                ptr1=ptr1->next;
                ptr1->val=ptr2->val;
            }
            ptr2=ptr2->next;
        }
        ptr1->next=NULL;
        return head;

    }
};