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

#include <bits/stdc++.h>
vector<pair<int, int>> findPairs(Node *head, int k)
{
    // Write your code here.
    vector<pair<int, int>> ans;
    if (!head)
    {
        ans[0].first = 0;
        ans[0].second = 0;
        return ans;
    }
    if (!head->next)
    {
        ans[0].first = 0;
        ans[0].second = 0;
        return ans;
    }
    map<int, int> mpp;
    Node *temp = head;
    while (temp)
    {
        int axios = temp->data;
        if (mpp[k - axios] != 0)
        {
            pair<int, int> tempo;
            tempo.first = k - axios;
            tempo.second = axios;
            ans.push_back(tempo);
        }
        mpp[axios]++;
        temp = temp->next;
    }

    return ans;
}
int main()
{
    return 0;
}