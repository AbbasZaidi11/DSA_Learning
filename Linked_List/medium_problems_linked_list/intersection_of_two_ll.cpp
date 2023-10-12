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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        map<ListNode *, int> mpp;
        ListNode *ans = NULL;
        if (!headA && !headB)
        {
            return NULL;
        }
        ListNode *temp = headA;
        while (temp)
        {
            mpp[temp]++;
            temp = temp->next;
        }
        temp = headB;

        while (temp)
        {
            if (mpp[temp] != 0)
            {
                ans = temp;
                break;
            }
            temp = temp->next;
        }
        return ans;
    }
};
int main()
{
    return 0;
}