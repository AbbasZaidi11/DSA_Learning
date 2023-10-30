#include <bits/stdc++.h>
using namespace std;
class MyHashMap
{
public:
    vector<int> vec;
    int size;
    MyHashMap()
    {
        size = 1e6 + 1;
        vec.resize(size);
        fill(vec.begin(), vec.end(), -1);
    }

    void put(int key, int value)
    {
        vec[key] = value;
    }

    int get(int key)
    {
        return vec[key];
    }

    void remove(int key)
    {
        vec[key] = -1;
    }
};

int main()
{
    return 0;
}