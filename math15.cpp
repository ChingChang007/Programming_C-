#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t t = time(0);
    tm* now = localtime(&t);

    cout << "Display the Current Date and Time :" << endl;

    cout << "seconds = " << now->tm_sec << " ";
    cout << "minutes = " << now->tm_min << " ";
    cout << "hours = " << now->tm_hour << " ";
    cout << "day of month = " << now->tm_mday << " ";
    
    cout << "month of year = " << now->tm_mon + 1 << " ";
    
    cout << "year = " << now->tm_year + 1900 << " ";
    
    cout << "weekday = " << now->tm_wday << " ";
    cout << "day of year = " << now->tm_yday << " ";
    cout << "daylight savings = " << now->tm_isdst << endl;

    cout << "Current Date: " << now->tm_mday << "/" << now->tm_mon + 1 << "/" << now->tm_year + 1900 << endl;
    cout << "Current Time: " << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << endl;

    return 0;
}
