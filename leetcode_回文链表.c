/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* middlenode(struct ListNode* head)
 {
     struct ListNode* fast,* slow;
     fast = slow = head;
     while(fast&&fast->next)
     {
         fast = fast->next->next;
         slow = slow->next;
     }
     return slow;
 }
 struct ListNode* rev(struct ListNode* head)
 {
     struct ListNode* cur = head;
     struct ListNode* newhead = NULL;
     while(cur)
     {
         struct ListNode* next = cur->next;
         cur->next = newhead;
         newhead = cur;
         cur = next;
     }
     return newhead;
 }
bool isPalindrome(struct ListNode* head)
{
    struct ListNode*mid = middlenode(head);
    struct ListNode*rhead = rev(mid);
    struct ListNode*cura = head;
    struct ListNode*curr = rhead;
    while(cura && curr)
    {
        if(cura->val!=curr->val)
        {
            return false;
        }
        else
        {
            cura = cura->next;
            curr = curr->next;
        }
    }
    return true;
}
