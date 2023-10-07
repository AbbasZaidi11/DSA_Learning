#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
Node *reverseDLL(Node *head)
{
    // Your code here
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    Node *j = head;
    Node *i = head;
    while (j->next != NULL)
    {
        j = j->next;
    }
    while (i != j)
    {
        int temp = i->data;
        i->data = j->data;
        j->data = temp;
        i = i->next;
        if (i == j)
        {
            break;
        }
        j = j->prev;
    }
    return head;
}

int main()
{
    return 0;
}