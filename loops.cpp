#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Function declared and defined here.
int AdditionFunction(int i, int j) 
{
    return i + j;
}

int AdditionVectorFunction(vector<int> a) {
    auto sum = 0;
    for(int i : a) {
        sum += i;
    }
    return sum;
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}



int main() {
    for (int j = 0; j < 5; j++)
    {
        cout << j << "\n";
    }

    auto i = 1;

    // Post-increment assigns i to c and then increments i.
    auto c = i++;

    cout << "Post-increment example:" << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";

    // Reset i to 1.
    i = 1;

    // Pre-increment increments i, then assigns to c.
    c = ++i;

    cout << "Pre-increment example:" << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";

    // Decrement i;
    i--;
    cout << "Decrement example:" << "\n";
    cout << "The value of i is: " << i << "\n";


    // For loop with containers 
    /*
    C++ offers several ways to iterate over containers.
     One way is to use an index-based loop as above.
      Another way is using a "range-based loop"
    */
    vector<int> a { 1, 2, 3, 4, 5};

    // range-based loop
    for (int i : a)
    {
        cout << i << "\n";
    }

    /*
     double range-based for loop that prints all of 
     the entries of the 2D vector b
     */
    vector<vector<int> > b{{1, 2}, {3, 4}, {5, 6}};

    for(auto v : b) {
        for(int i : v) {
            cout << i << " ";
        }
        cout << "\n";
    }

    cout << AdditionFunction(50, 5) << "\n";

     vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your 
    // function:
    cout << AdditionVectorFunction(v) << "\n";


    vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  PrintBoard(board);
}