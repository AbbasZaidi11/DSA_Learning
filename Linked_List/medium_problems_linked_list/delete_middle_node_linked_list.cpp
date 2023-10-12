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
    ListNode *deleteMiddle(ListNode *head)
    {
        if (!head)
        {
            return head;
        }
        if (head->next == NULL)
        {
            return NULL;
        }
        if (head->next->next == NULL)
        {
            head->next = NULL;
            return head;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        if (slow->next == NULL)
        {
            slow = NULL;
            return head;
        }
        if (slow->next->next == NULL)
        {
            swap(slow->val, slow->next->val);
            slow->next = NULL;
            return head;
        }
        swap(slow->val, slow->next->val);
        slow->next = slow->next->next;
        return head;
    }
};
int main()
{
    return 0;
}