
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
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head)
        {
            return head;
        }
        if (!head->next || !head->next->next)
        {
            return head;
        }
        ListNode *odd = head;
        ListNode *odd_head = head;
        ListNode *even_head = head->next;
        ListNode *even = head->next;
        while (even && even->next)
        {
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = even->next->next;
            even = even->next;
        }
        odd->next = even_head;
        return head;
    }
};
int main()
{
}