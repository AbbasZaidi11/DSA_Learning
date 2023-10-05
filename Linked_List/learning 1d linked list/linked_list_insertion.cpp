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

Node *insertAtFirst(Node *list, int newValue)
{
    // Write your code here
    Node *temp = new Node(newValue);
    temp->next = list;
    return temp;
}
int main()
{
    return 0;
}