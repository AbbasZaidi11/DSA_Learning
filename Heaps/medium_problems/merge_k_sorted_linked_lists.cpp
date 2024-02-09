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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *head = new ListNode(-1);
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto a : lists)
        {
            ListNode *temp = a;
            while (temp)
            {
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        ListNode *tempo = head;
        while (!pq.empty())
        {
            ListNode *ok = new ListNode(pq.top());
            tempo->next = ok;
            tempo = tempo->next;
            pq.pop();
        }
        if (tempo == head)
        {
            return NULL;
        }
        return head->next;
    }
};
int main()
{
    return 0;
}