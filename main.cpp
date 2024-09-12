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

void explainList(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(3);
    ls.emplace_front(4);

    for(auto it: ls){
        cout << it << " ";
    }
    cout << endl;

    //rest functions same as vector
    //begin(), end(), rbegin(), rend(), size(), clear(), insert(), erase(), swap(), remove(), reverse()
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(3);
    dq.emplace_front(4);
    
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
    for(auto it: dq){
        cout << it << " ";
    }
    cout << endl;

    //rest functions same as vector
    //begin(), end(), rbegin(), rend(), size(), clear(), insert(), erase(), swap(), pop_front(), pop_back()
}

void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.emplace(2); // {1, 2}
    st.emplace(3); // {1, 2, 3}

    cout << st.top() << endl; // Returns the top element - 3

    st.pop(); // {1, 2}

    cout << st.size() << endl; // Returns the size of the stack - 2
    // rest operatons pretty smilar to other data structures
    // empty(), swap()

}

void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.emplace(2); // {1, 2}
    q.emplace(3); // {1, 2, 3}

    cout << q.front() << endl; // Returns the first element - 1
    cout << q.back() << endl; // Returns the last element - 3

    q.pop(); // {2, 3}

    cout << q.size() << endl; // Returns the size of the queue - 2
    // rest operatons pretty smilar to other data structures
    // empty(), swap()
}

void explainPriorityQueue(){
    priority_queue<int> pq; // Max heap
    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << pq.top() << endl; // Returns the top element - 30

    pq.pop(); // Removes the top element

    priority_queue<int, vector<int>, greater<int>> pq1; // Min heap 
    //in max heap you dont define vector <int> and greater<int>
    pq1.push(5);
    pq1.push(1);
    pq1.push(10);
    pq1.push(30);
    pq1.push(20);

    cout << pq1.top() << endl; // Returns the top element - 1

    //push - logn, top - O(1), pop - logn
}

void explainSet(){
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.emplace(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    st.insert(3); // {1, 2, 3, 4} - No duplicates
  
    auto it = st.find(3); // Returns the iterator to the element if found else returns st.end()

    st.erase(3); // {1, 2, 4}

    int cnt = st.count(3); // Returns the count of the element in the set - 0

    auto it2 = st.find(2);
    auto it3 = st.find(4);
    st.erase(it2, it3); // {1}

    auto it = st.lower_bound(2); // Returns the iterator to the element which is equal to or just greater than the given element
    auto it = st.upper_bound(2); // Returns the iterator to the element which is just greater than the given element

    // rest functions same as vector
}

void explainMultiSet(){
    //same as set that is it sorts but allows duplicates
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.emplace(2); // {1, 2}
    ms.emplace(1); // {1, 1, 2}

    int cnt = ms.count(1); // Returns the count of the element in the set - 2

    ms.erase(1); // {1, 2}

    //rest operations same as set

}

void explainUnorderedSet(){
    unordered_set<int> st;
    //lower_bound, upper_bound, find, count are not available in unordered set
    //rest functions same as set, they do not store in sorted order
}

int main(){
    explainList();
    return 0;
}

