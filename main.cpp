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

void explainVector(){
    vector<int> v; //creates an empty vector container

   
    v.push_back(1);
    v.emplace_back(2); // More efficient than push_back
    for(int i=3;i<=8;i++){
        v.emplace_back(i);
    }

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(2,3);
  
    vector<int> v2(5,100); // creates a vector of size 5 with all values as 100
    vector<int> v3(5); // creates a vector of size 5 with all values as 0
    
    vector<int> copy(v); // creates a copy of vector v
    vector<int> copy2 = v; // creates a copy of vector v

    cout << copy2[0] << endl;

    // Iterating over the vector
    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *it << endl;

    // it =  it+2;
    // cout << *it << endl;

    vector<int>::iterator it1 = v.end(); // Points to the next of the last element
    vector<int>::reverse_iterator it2 = v.rend(); // Points to the previous of the first element - rverse end
    vector<int>::reverse_iterator it3 = v.rbegin(); // Points to the last element
    it3++; // Points to the second last element

    cout << v[0] << " " << v.at(0) << endl; // Both are same
    cout << v.back() << endl; // Returns the last element

    //Understaning 3 ways of iterating over a vector and finding the most efficient one
    cout<<"v: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl << "v: ";

    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "v: ";              // it automatically takes the datatype of the vector elements
    for (auto it : v){  // here auto is int
        cout << it << " ";
    }
    cout << endl;



    //{1,2,3,4,5,6,7,8}
    v.erase(v.begin()+1); // Erases the first element - v: 1 3 4 5 6 7 8
    
    v.erase(v.begin()+1, v.begin()+3); // Erases the elements in the range of [first, last)
    // v: 1 5 6 7 8

    vector<int> v4(2, 100); // {100, 100}
    v4.insert(v4.begin(), 300); // {300, 100, 100}
    v4.insert(v4.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy3(2, 50); // {50, 50}
    v4.insert(v4.begin(), copy3.begin(), copy3.end()); // {50, 50, 300, 10, 10, 100, 100}

    cout << v4.size() << endl; // Returns the size of the vector

    v4.swap(v2); // Swaps the values of v1 and v2

    v.clear(); // Removes all the elements of the vector

    cout << v.empty() << endl; // Returns a boolean value if the vector is empty or not - 1 if empty, 0 if not
}

int main(){
    explainVector();
    return 0;
}

