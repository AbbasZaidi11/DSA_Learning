#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

Node *constructLL(vector<int> &arr)
{
    int n = arr.size();
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < n; i++)
    {
        Node *curNode = new Node(arr[i]);
        temp->next = curNode;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {4, 2, 5, 1};
    Node *head = constructLL(arr); // Capture the returned pointer

    // You can now work with the linked list

    return 0;
}
