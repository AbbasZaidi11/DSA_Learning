#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void recur(vector<vector<int>> &image, int sr, int sc, int color, int target, int n, int m)
    {
        if (sr < 0 || sc < 0 || sr >= n || sc >= m)
        {
            return;
        }

        if (image[sr][sc] != target || image[sr][sc] == color)
        {
            return;
        }

        if (image[sr][sc] == target)
        {
            image[sr][sc] = color;
            recur(image, sr + 1, sc, color, target, n, m);
            recur(image, sr, sc + 1, color, target, n, m);
            recur(image, sr - 1, sc, color, target, n, m);
            recur(image, sr, sc - 1, color, target, n, m);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int target = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        recur(image, sr, sc, color, target, n, m);
        return image;
    }
};

int main()
{
    return 0;
}