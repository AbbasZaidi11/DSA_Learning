#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *p = NULL;
        ListNode *c = head;
        if (c == NULL)
        {
            return NULL;
        }
        ListNode *n = head->next;
        while (n != NULL)
        {
            c->next = p;
            p = c;
            c = n;
            n = n->next;
        }
        c->next = p;
        delete n;
        return c;
    }
};
int main()
{
    return 0;
}
