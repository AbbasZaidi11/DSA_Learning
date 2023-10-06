#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(T data, T *next)
    {
        this->data = data;
        this->next = next;
    }
};

int searchInLinkedList(Node<int> *head, int k)
{
    // Write your code here.
    Node<int> *temp = head;
    if (head->data == k)
    {
        return 1;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
        if (temp->data == k)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    return 0;
}