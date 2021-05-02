#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // there ways if declaring and initializing vectors
    vector<int> v_1{0, 1, 2};
    vector<int> v_2 = {3, 4, 5};
    vector<int> v_3;
    v_3 = { 6 };

    cout << "Everything worked"
         << "\n";



// nesting vectors

// creating a 2D vector
    vector<vector<int> > v {{1, 2}, {3, 4}};
    cout << "Great A 2D vector has been created."
         << "\n";


    // Accessing element of a vector
    // vector are also indexed from 0 just as normal arrays
    vector<int> a{0, 1, 2, 3, 4};

    cout <<"element one" << a[0];
    cout <<"element two" << a[3];

    // vector length
    cout << a.size() << "\n";

    // 2D vector length
    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};

    cout << b[0].size() << "\n";
}
