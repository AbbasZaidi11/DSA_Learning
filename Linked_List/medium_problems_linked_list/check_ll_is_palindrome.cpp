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
    bool isPalindrome(ListNode *head)
    {
        ListNode *temp = head;
        if (head->next == NULL)
        {
            return head;
        }
        vector<int> vec;
        vector<int> ans;
        while (temp != NULL)
        {
            vec.push_back(temp->val);
            ans.push_back(temp->val);
            temp = temp->next;
        }
        reverse(vec.begin(), vec.end());
        if (vec == ans)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    return 0;
}