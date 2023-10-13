#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

Node *deleteAllOccurrences(Node *head, int k)
{
    // Write your code here
    if (!head)
    {
        return head;
    }
    if (!head->next)
    {
        return head;
    }
    Node *temp = head;
    while (temp)
    {
        if (temp->data == k)
        {
            if (temp->prev && temp->next)
            {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
            }
            else if (temp->prev)
            {
                temp->prev->next = NULL;
            }
            else
            {
                head = temp->next;
            }
        }
        temp = temp->next;
    }
    if (head->data == k)
    {
        return NULL;
    }
    return head;
}
int main()
{
    return 0;
}
