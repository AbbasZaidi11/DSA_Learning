#include <bits/stdc++.h>
using namespace std;
      static bool comp(Job p1, Job p2) {
        return p1.profit > p2.profit;
    }

    vector<int> JobScheduling(Job arr[], int n) {
        // Sort jobs by profit in non-increasing order
        sort(arr, arr + n, comp);

        // Find maximum deadline
        int maxDeadline = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, arr[i].dead);
        }

        // Initialize slots
        vector<int> slot(maxDeadline, -1);

        int count = 0;
        int profit = 0;
        for (int i = 0; i < n; i++) {
            // Find a suitable slot for the current job
            for (int j = min(maxDeadline - 1, arr[i].dead - 1); j >= 0; j--) {
                if (slot[j] == -1) {
                    count++;
                    profit += arr[i].profit;
                    slot[j] = arr[i].id;
                    break; // Found a slot, move to the next job
                }
            }
        }

        vector<int> ans = { count, profit };
        return ans;
    }

int main(){
  return 0;
}
