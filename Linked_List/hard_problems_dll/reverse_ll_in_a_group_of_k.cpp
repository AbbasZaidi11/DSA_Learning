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
    ListNode *rotateRight(ListNode *head, int k)
    {
        ListNode *temp = head;
        if (!head || !head->next)
        {
            return head;
        }
        int count = 1;
        while (temp->next)
        {
            count++;
            temp = temp->next;
        }
        temp->next = head;
        k = k % count;
        int index_req = count - k - 1;
        ListNode *loopd = head;
        int jk = 0;
        while (index_req != jk)
        {
            jk++;
            loopd = loopd->next;
        }
        head = loopd->next;
        loopd->next = NULL;
        return head;
    }
};
int main()
{
    return 0;
}
