//  include iostream for output
#include <cassert>
#include <iostream>

using std::cout;

// Define a sinple structure

struct Date
{
    public:
        int Day() {
            return day;
        }
        void Day(int d) {
            if (d > 1) {
                day = d;
            }
        }
        int month;
        int year;
    private:
        int day{1};
        // with default values
        // int day{2};
        // int month{3};
        // int year{2010};
};

// Define a main function to instantiate and test 

int main() {
    Date date;

    date.Day(29);
    date.month = 4;
    date.year = 2015;

    // Tests
    assert(date.Day() == 29);
    assert(date.month == 8);
    assert(date.year == 2015);

    // Print the data in the structure
    cout << date.Day() << "/" << date.month << "/" << date.year << "\n";

}