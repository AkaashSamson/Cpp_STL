#include<bits/stdc++.h> // Include all standard libraries

using namespace std;   // Use standard namespace

void explainpair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, string> p2 = {1, "Hello"};
    cout << p2.first << " " << p2.second << endl;
    
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[0].first << " " << arr[0].second << endl;
    //Pairs lies in the utility Library of C++ STL
}

int main(){
    explainpair();
    return 0;
}

