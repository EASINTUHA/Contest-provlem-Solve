#include <iostream>
#include <set>
#include <string>

using namespace std;

int timeToMinutes(string time) {
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    return hours * 60 + minutes;
}

string minutesToTime(int totalMinutes) {
    int hours = (totalMinutes / 60) % 24;
    int minutes = totalMinutes % 60;
    char buffer[6];
    snprintf(buffer, sizeof(buffer), "%02d:%02d", hours, minutes);
    return string(buffer);
}

bool isPalindrome(const string& time) {
    return time[0] == time[4] && time[1] == time[3];
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int x;
        cin>>s>>x;
        set<string> palindromicTimes;
        int startMinutes=timeToMinutes(s);
        int currentMinutes=startMinutes;
        do {
            string currentTime = minutesToTime(currentMinutes);
            if (isPalindrome(currentTime)) {
                palindromicTimes.insert(currentTime);
            }
            currentMinutes = (currentMinutes + x) % 1440;
        }while (currentMinutes != startMinutes);

        cout << palindromicTimes.size() << endl;
    }
    
    return 0;
}
