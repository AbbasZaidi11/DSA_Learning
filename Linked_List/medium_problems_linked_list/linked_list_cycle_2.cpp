#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;
        map<ListNode *, int> mpp;
        while (temp != NULL)
        {
            if (mpp[temp] != 0)
            {
                return temp;
            }
            mpp[temp]++;
            count++;
            temp = temp->next;
        }
        return NULL;
    }
};
int main()
{
    return 0;
}