#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> brothers{"David", "Ethan", "Adma"};
    for (std::string const& brother : brothers) {
        std::cout << "Hello " << brother << "!\n";
    }

    // Declaring and initializing an int variable.
    int a = 9;
    
    // Declaring a string variable without initializing right away.
    std::string b;
    
    // Initializing the string b.
    b = "Here is a string";
    
    cout << a << "\n";
    cout << b << "\n";
    
    return 0;
}
