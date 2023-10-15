#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    Node *rev(Node *head)
    {
        Node *p = NULL;
        Node *c = head;

        Node *n = head->next;
        while (n)
        {
            c->next = p;
            p = c;
            c = n;
            n = n->next;
        }
        c->next = p;
        return c;
    }
    Node *addOne(Node *head)
    {
        // Your Code here
        // return head of list after adding one
        if (!head)
        {
            return NULL;
        }
        head = rev(head);
        bool f = true;
        Node *cur = head;

        while (cur != NULL and f == true)
        {
            if (cur->next == NULL and cur->data == 9)
            {
                cur->data = 1;
                Node *temp = new Node(0);
                temp->next = head;
                head = temp;
                cur = cur->next;
            }
            else if (cur->data == 9)
            {
                cur->data = 0;
                cur = cur->next;
            }
            else
            {
                cur->data = cur->data + 1;
                cur = cur->next;
                f = false;
            }
        }
        head = rev(head);
        return head;
    }
};
int main()
{
    return 0;
}