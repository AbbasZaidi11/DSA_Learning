#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

// Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
    // Your code here
    Node *travel = head;
    int count = 0;
    while (travel != NULL)
    {
        if (pos == count)
        {
            break;
        }
        count++;
        travel = travel->next;
    }
    if (travel->next == NULL)
    {
        Node *enter = new Node(data);
        enter->next = NULL;
        enter->prev = travel;
        travel->next = enter;
    }

    else
    {
        Node *enter = new Node(data);
        travel->next->prev = enter;
        enter->next = travel->next;
        travel->next = enter;
        enter->prev = travel;
    }
}
int main()
{
    return 0;
}