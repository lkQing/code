/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 
{
    struct ListNode *p, *q;
    p = headA;
    q = headB;
    int p1 = 1,q1 = 1;
    while(p->next)
    {
        p=p->next;
        p1++;
    }
    while(q->next)
    {
        q=q->next;
        q1++;
    }
    if(p != q)
    {
        return NULL;
    }
    int gap;
    gap = p1 > q1 ? p1 - q1 : q1 - p1;
    struct ListNode* pp,* qq;
    pp = headA;
    qq = headB;
    if(p1>q1)
    {
        while(gap)
        {
            pp = pp->next;
            gap--;
        }
        while(pp!=qq)
        {
            pp = pp->next;
            qq = qq->next;
        }
    }
    else
    {
        while(gap)
        {
            qq = qq->next;
            gap--;
        }
        while(pp!=qq)
        {
            pp = pp->next;
            qq = qq->next;
        }
    }
    return pp;
}