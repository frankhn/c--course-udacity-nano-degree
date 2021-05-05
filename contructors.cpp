#include <cassert>

class Date {
    public: // constructor defined inside a class
        Date(int d, int m, int y);

    int Day() { return day; }
    void Day(int d);

    int Month() { return month; }
    void Month(int m)
    {
        if (m >= 1 && m <= 12)
            month = m;
        }
        int Year() { return year; }
        void Year(int y) { year = y; }

    private:
        int day{1};
        int month{1};
        int year{0};
};

// constructor defined outside the class
Date::Date(int d, int m, int y) {
    Day(d);
    Month(m);
    Year(y);
}

void Date::Day(int d) {
   if (d >= 1 && d <= 31)
        day = d;
}

int main() {
    Date date(8, 29, 1991);
    // Test
    assert(date.Day() == 8);
    assert(date.Month() == 29);
    assert(date.Year() == 1991);
}

// Default constructor
// class Date { 
//   int day{1};
//   int month{1};
//   int year{0};
// };
