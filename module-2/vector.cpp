#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v; // O(1)

    vector<int> v1(10); // O(N)

    vector<int> v2(10, 7); // O(N)

    int a[5] = {1, 3, 5, 2, 8};

    vector<int> v3(a, a + 5); // O(N)

    vector<int> v4 = {1, 3, 5, 2, 8};  // O(N)

    return 0;
}