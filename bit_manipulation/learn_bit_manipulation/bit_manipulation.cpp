#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
vector<int> bitManipulation(int num, int i)
{
    // Write your code here.
    string binary_string = bitset<32>(num).to_string();

    vector<int> ans;
    int n = binary_string.size();
    string copy = binary_string;

    ans.push_back(binary_string[n - i] - '0');
    binary_string[n - i] = '1';

    bitset<32> binaryNumber(binary_string); // Assumes a 32-bit integer
    int convertedDecimalNumber = static_cast<int>(binaryNumber.to_ulong());
    ans.push_back(convertedDecimalNumber);
    binary_string = copy;
    binary_string[n - i] = '0';

    bitset<32> binaryNumber2(binary_string);
    int convertedDecimalNumber2 = static_cast<int>(binaryNumber2.to_ulong());
    ans.push_back(convertedDecimalNumber2);
    return ans;
}
int main()
{
    return 0;
}