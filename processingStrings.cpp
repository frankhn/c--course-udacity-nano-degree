#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() {
    string a("1 3 4");

    istringstream my_stream(a);

    int n;
    my_stream >> n;
    cout << n << "\n";

    // Testing to see if the stream was successful and printing results.
    while (my_stream) {
        my_stream >> n;
        if (my_stream) {
            cout << "That stream was successful: " << n << "\n";
        }
        else {
            cout << "That stream was NOT successful!" << "\n";            
        }
    }

    // string with mixed types
    char c;
    int n;

    while (my_stream >> n >> c) {
      cout << "That stream was successful:" << n << " " << c << "\n";
    }
    cout << "The stream has failed." << "\n";

    
}