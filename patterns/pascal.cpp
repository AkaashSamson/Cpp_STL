#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 7;
    vector<vector<int>> pascal(n);

    // Initialize the Pascal's triangle
    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i + 1);
        pascal[i][0] = pascal[i][i] = 1; // First and last elements are 1

        for (int j = 1; j < i; j++)
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    // Print the Pascal's triangle
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces for formatting
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print the numbers in the triangle
        for (int j = 0; j <= i; j++)
        {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}