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
    void deleteNode(ListNode *node)
    {
        ListNode *temp_node = node->next;
        temp_node = node->next;
        swap(temp_node->val, node->val);
        node->next = temp_node->next;
        delete temp_node;
    }
};
int main()
{
    return 0;
}
