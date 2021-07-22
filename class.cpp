#include <iostream>
using namespace std;
class Time
{
private:
    int hour, minutes, seconds;

public:
    void scanTime()
    {
        cout << "Enter time: \n";
        cout << "Hours? ";
        cin >> hour;
        cout << "Minutes? ";
        cin >> minutes;
        cout << "Seconds? ";
        cin >> seconds;
    }
    void printTime()
    {
        cout << "The time is = ";
        if (hour <= 9)
        {
            cout << "0";
        }
        cout << hour << ":";
        if (minutes <= 9)
        {
            cout << "0";
        }
        cout << minutes << ":";
        if (seconds <= 9)
        {
            cout << "0";
        }
        cout << seconds << endl;
    }
    void printTotalTime()
    {
        minutes += (60 * hour);
        seconds += (60 * minutes);
        cout << "Time in total seconds: " << seconds;
    }
};

int main()
{
    Time time;
    time.scanTime();
    time.printTime();
    time.printTotalTime();

    return 0;
}