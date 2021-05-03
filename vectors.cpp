#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

/*
Write a vector<int> ParseLine function which 
accepts a string as an argument. 
Use std::istringstream to parse the line by
 comma chars, and store the ints in a 
 vector<int>. ParseLine should return the vector
  after parsing.

*/
vector<int> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<int> row;
    while (sline >> n >> c && c == ',') {
      row.push_back(n);
    }
    return row;
}

vector<vector<int> > ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<int> > board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<int> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

#include "test.cpp"

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


    // adding content to a vector
    vector<int> v {1, 2, 3};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    // push 4 to the back of the vector
    v.push_back(4);

    // print the content again
    for (int i = 0; i < v.size(); i++)
    {
        cout << "print vector values again" << v[i] << "\n";
    }

  TestParseLine();

//   Formatting a printed board
// Create the enum Color with fixed values.
    enum class Color {white, black, blue, red};

    // Create a Color variable and set it to Color::blue.
    Color my_color = Color::blue;

    // Test to see if my car is red.
    if (my_color == Color::red) {
        cout << "The color of my car is red!" << "\n";
    } else {
        cout << "The color of my car is not red." << "\n";
    }
}
