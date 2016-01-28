#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int return_day, actual_return_day, return_month, actual_return_month, return_year, actual_return_year;
    int fine = 0;
    cin >> return_day;
    cin >> return_month;
    cin >> return_year;
    cin >> actual_return_day;
    cin >> actual_return_month;
    cin >> actual_return_year;
    if(return_month == actual_return_month 
    && return_year == actual_return_year) {
        fine = return_day > actual_return_day ? 15 * (return_day - actual_return_day) : 0;
    }
    else if(return_year == actual_return_year) {
        fine = return_month > actual_return_month ? 500 * (return_month - actual_return_month) : 0;
    }
    else {
        fine = 10000;
    }
    cout << fine;
    return 0;
}

