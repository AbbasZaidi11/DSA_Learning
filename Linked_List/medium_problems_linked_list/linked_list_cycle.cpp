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
    bool hasCycle(ListNode *head)
    {
        map<ListNode *, int> mpp;
        ListNode *temp = head;
        while (temp != NULL)
        {
            if (mpp[temp] == 0)
            {
                mpp[temp]++;
            }
            else
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};
int main()
{
    return 0;
}