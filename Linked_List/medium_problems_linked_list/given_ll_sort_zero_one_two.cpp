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
    // Function to sort a linked list of 0s, 1s and 2s.
    Node *segregate(Node *head)
    {
        if (!head)
        {
            return head;
        }
        if (!head->next)
        {
            return head;
        }

        // Add code here
        Node *temp = head;
        Node *zero = new Node(-1);
        Node *zerohead = zero;
        Node *one = new Node(-2);
        Node *onehead = one;
        Node *two = new Node(-3);
        Node *twohead = two;
        while (temp)
        {
            if (temp->data == 0)
            {
                zero->next = temp;
                zero = zero->next;
            }
            else if (temp->data == 1)
            {
                one->next = temp;
                one = one->next;
            }
            else
            {
                two->next = temp;
                two = two->next;
            }
            temp = temp->next;
        }
        if (zerohead->next && onehead->next && twohead->next)
        {
            zerohead = zerohead->next;
            onehead = onehead->next;
            zero->next = onehead;
            twohead = twohead->next;
            one->next = twohead;
            two->next = NULL;
            return zerohead;
        }
        if (zerohead->next && onehead->next)
        {
            zerohead = zerohead->next;
            onehead = onehead->next;
            zero->next = onehead;
            one->next = NULL;
            return zerohead;
        }
        if (zerohead->next && twohead->next)
        {
            zerohead = zerohead->next;
            twohead = twohead->next;
            zero->next = twohead;
            two->next = NULL;
            return zerohead;
        }
        if (onehead->next && twohead->next)
        {
            onehead = onehead->next;
            twohead = twohead->next;
            one->next = twohead;
            two->next = NULL;
            return onehead;
        }
        if (onehead->next)
        {
            onehead = onehead->next;
            one->next = NULL;
            return onehead;
        }
        if (zerohead->next)
        {
            zerohead = zerohead->next;
            zero->next = NULL;
            return zerohead;
        }
        if (twohead->next)
        {
            twohead = twohead->next;
            two->next = NULL;
            return twohead;
        }
        return NULL;
    }
};

int main()
{
    return 0;
}