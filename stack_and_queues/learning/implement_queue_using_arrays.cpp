#include <bits/stdc++.h>
using namespace std;
class Queue
{

public:
    int front, rear;
    vector<int> arr;

    Queue()
    {
        front = 0;
        rear = 0;
        arr.resize(100001);
    }

    // Enqueue (add) element 'e' at the end of the queue.
    void enqueue(int e)
    {
        // Write your code here.
        if (rear <= (arr.size() - 1))
        {
            arr[rear] = e;
            rear++;
        }
        return;
    }

    // Dequeue (retrieve) the element from the front of the queue.
    int dequeue()
    {
        // Write your code here.
        if (front == rear)
        {
            return -1;
        }
        int ans = arr[front];
        front++;
        return ans;
    }
};
int main()
{
    return 0;
}