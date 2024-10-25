#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {5, 3, 8, 1, 2};

    // Reversing the vector
    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    // Sorting the vector
    sort(vec.begin(), vec.end());
    cout << "Sorted vector: ";
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    // Reverse sorting the vector
    sort(vec.begin(), vec.end(), greater<int>());
    cout << "Reverse sorted vector: ";
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size: " << vec.size();

    return 0;
}