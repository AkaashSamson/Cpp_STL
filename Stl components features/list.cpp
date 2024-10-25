#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

int main()
{
    vi L = {2, 3, 1, 4, 5};

    auto m = *min_element(L.begin(), L.end());
    auto ind = find(L.begin(), L.end(), m);
    cout << m << " " << distance(L.begin(), ind) << endl;

    reverse(L.begin(), L.end());
    for (auto i : L)
    {
        cout << i << " ";
    }
    return 0;
}