//
// Created by Stefan Diaconu on 16/08/2025.
//

#ifndef MAIN_CHRONO_H
#define MAIN_CHRONO_H
#include "../std_lib_facilities.h"

namespace Chrono {
    enum class Month {
        jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

    enum class Day {
        sunday, monday, tuesday, wednesday, thursday, friday, saturday
    };

    class Date {
        public:
            class Invalid {};

            Date(int y, Month m, int d);
            Date();

            // nonmodifying operations
            int day() const { return d; }
            Month month() const { return m; }
            int year() const { return y; }

            // modifying operations
            void add_day(int n);
            void add_month(int n);
            void add_year(int n);
        private:
            int y;
            Month m;
            int d;
    };

    bool is_date(int y, Month m, int d);
    bool leapyear(int y);

    bool operator==(const Date& a, const Date& b);
    bool operator!=(const Date& a, const Date& b);

    ostream& operator<<(ostream& os, const Date& d);
    istream& operator>>(istream& is, Date& dd);

    Day day_of_week(const Date& d);
    Date next_sunday(const Date d);
    Date next_weekday(const Date& d);
}

#endif //MAIN_CHRONO_H