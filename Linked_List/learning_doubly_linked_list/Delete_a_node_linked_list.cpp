#include <stdio.h>
#include <stdlib.h>

/* a Node of the doubly linked list */

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Solution
{
public:
    Node *deleteNode(Node *head_ref, int x)
    {
        // Your code here
        if (head_ref->next == NULL)
        {
            delete head_ref;
            return NULL;
        }
        Node *temp = head_ref;
        int count = 1;
        while (temp != NULL)
        {
            if (count == x)
            {
                break;
            }
            count++;
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            temp->prev->next = NULL;
            delete temp;
            return head_ref;
        }
        else if (temp->prev == NULL)
        {
            temp->next->prev = NULL;
            head_ref = temp->next;
            delete temp;
            return head_ref;
        }
        else
        {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            delete temp;
        }
        return head_ref;
    }
};
