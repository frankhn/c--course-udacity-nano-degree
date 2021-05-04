/*
C++ supports two notions of immutability:

const: meaning roughly " I promise not to change this value."...The compiler enforces the promise made by const....
constexpr: meaning roughly "to be evaluated at compile time." This is used primarily to specify constants...


This example highlights how to use const to promise not to modify a variable, even though the variable can only be evaluated at run time.

The example also show how to use constexpr to guarantee that a variable can be evaluated at compile time.
*/

#include <iostream>

using std::cin;
using std::cout;

int main() {
    int i;
    cout << "Enter an integer value for i: ";
    cin >> i;
    const int j = i * 2; // "j can only be evaluated at run time."
                              // "But I promise not to change it after it is initialized."

    constexpr int k = 3;  // "k, in contrast, can be evaluated at compile time."

    cout << "j = " << j << "\n";
    cout << "k = " << k << "\n";
}

/*
The major difference between const and constexpr, 
though, is that constexpr must be evaluated at compile time.

The compiler will catch a constexpr variable 
that cannot be evaluated at compile time.


A common usage of const is to guard against 
accidentally changing a variable, 
especially when it is passed-by-reference as a 
function argument.
*/
