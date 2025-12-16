#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 3, 5, 2, 8};

    vector<int> v2;
    v2 = v;

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    for (int x : v2)
        cout << x << " ";

    return 0;
}